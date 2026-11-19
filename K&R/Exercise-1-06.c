/* Verify that the expression getchar() != EOF is 0 or 1. */

#include<stdio.h>

int main(void){

    printf("probably need to press return on the keyboard \n");
    printf("%d\n", getchar() != EOF);

    return 0;

}
