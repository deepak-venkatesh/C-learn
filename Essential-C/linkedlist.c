/*

Build the list {1,2,3} in the heap and store its head pointer in a local stack variable.
Returns the head pointer to the caller of the function.
Code courtesy: Nick Parlante

Reduce the number of assignments to 7

*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

 struct node *BuildOneTwoThree(void) {
        struct node *head = malloc(sizeof(struct node)); // we can directly malloc rather than NULL
        head->next = malloc(sizeof(struct node)); // use the head->next to allocate memory for second and third
        head->next->next = malloc(sizeof(struct node));

        head->data = 1;
        head->next->data = 2; // follow the chain to allocate the data values to second and third
        head->next->next->data = 3;

        head->next->next->next = NULL; // this terminates the linkedlist with a NULL

        return head;
    }

int Length (struct node *head) {
    struct node *current = head;
    int count = 0;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

struct node *LinkTest(struct node *head) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = 0;
    newNode->next = head;
    
    return newNode;
}


int main(void) {
    struct node *head = BuildOneTwoThree();

    printf("1st Element: %d\n", head->data);
    printf("2nd Element: %d\n", head->next->data);
    printf("3rd Element: %d\n", head->next->next->data);

    printf("Length of linkedlist: %d\n", Length(head));

    struct node *newNode = LinkTest(head);

    printf("1st Element: %d\n", newNode->data);
    printf("2nd Element: %d\n", newNode->next->data);
    printf("3rd Element: %d\n", newNode->next->next->data);
    printf("4th Element: %d\n", newNode->next->next->next->data);

    printf("Length of new linkedlist: %d\n", Length(newNode));

    free(newNode->next->next->next);
    free(newNode->next->next);
    free(newNode->next);
    free(newNode);

    // free(head->next->next);
    // free(head->next);
    //free(head);

    return 0;
}