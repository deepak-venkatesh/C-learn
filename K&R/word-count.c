/* counting words, lines and characters */

#include <stdio.h>

#define IN 1
#define OUT 0

int main(void){
    int c, nc, nw, nl, state;

    c = nc = nw = nl = 0;
    state = OUT;

    while ((c = getchar()) != EOF){
        ++nc;
        if (c == '\n'){
            ++nl;
        }
        if (c == ' ' || c == '\t' || c == '\n'){
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("characters: %d\nlines: %d\nwords: %d\n", nc, nl, nw);

    return 0;
}
