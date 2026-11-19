/* Write a program that prints its input one word per line. */

#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
    int c, state;
    c = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n'){
            putchar(c);
            state = IN;
        }
        else if (state == IN) {
            state = OUT;
            putchar('\n');
        }
    }
    return 0;
}

