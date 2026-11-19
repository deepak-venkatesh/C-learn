/* counting all 10 digits, white spaces and all other characters as a whole */

include <stdio.h>

int main(void){
    int ndigit[10];
    int i, c, nwhite, nother;

    nwhite = nother = 0;

    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            ++ndigit[c - '0'];
        }
        else if (c == ' ' || c == '\t' || c == '\n'){
            ++nwhite;
        }
        else{
            ++nother;
        }
    }

    printf("digits = ");
    for (i = 0; i < 10; ++i){
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d, other characters = %d\n", nwhite, nother);

    return 0;
}
