/* Experiment to find out what happens when prints's argument string contains
\c, where c is some character not listed above. */

#include <stdio.h>

int main(void){
    printf("hello, world \c");
    return 0;
}

/*

The program runs but says unknown escape sequence.

1-02-ex.c:4:26: warning: unknown escape sequence '\c' [-Wunknown-escape-sequence]
    4 |     printf("hello, world \c");
      |                          ^~
1 warning generated.
hello, world c

*/