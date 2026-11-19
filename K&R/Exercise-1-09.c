/* Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank. */

#include<stdio.h>

int main(void){
    int c;
    
    c = getchar();

    while (c != EOF){
        putchar(c);
        while (c == ' '){
            c = getchar();
        }
        c = getchar();
    }

    return 0;
}
