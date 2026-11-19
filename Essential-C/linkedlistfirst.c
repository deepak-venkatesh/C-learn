/*

Build the list {1,2,3} in the heap and store its head pointer in a local stack variable.
Returns the head pointer to the caller of the function.
Code courtesy: Nick Parlante

*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

 struct node *BuildOneTwoThree(void) {
        struct node *head = NULL;
        struct node *second = NULL;
        struct node *third = NULL;

        head = malloc(sizeof(struct node));
        second = malloc(sizeof(struct node));
        third = malloc(sizeof(struct node));

        head->data = 1;
        second->data = 2;
        third->data = 3;

        head->next = second;
        second->next = third;
        third->next = NULL;

        return head;
    }

int main(void) {
    struct node *head = BuildOneTwoThree();

    printf("%d\n", head->data);
    printf("%d\n", head->next->data);
    printf("%d\n", head->next->next->data);

    free(head->next->next);
    free(head->next);
    free(head);

    return 0;
}
