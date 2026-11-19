/* Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>

int main(void){

    int c, blanks, tabs, nl;

    c = 0;
    blanks = 0;
    tabs = 0;
    nl = 0;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++blanks;
        }
        if (c == '\t'){
            ++tabs;
        }
        if (c == '\n'){
            ++nl;
        }
    }

    printf("blanks: %d\ntabs: %d\nlines: %d\n", blanks, tabs, nl);
    return 0;
}
