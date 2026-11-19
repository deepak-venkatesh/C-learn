/* Modify the temperature conversion program to print the table in reverse order,
that is, from 300 degrees to 0. */

#include <stdio.h>

int main(void){
    int f;

    for (f = 300; f >= 0; f = f - 20)
        printf("%3d %6.1f\n", f, (5.0/9.0) * (f - 32));

    return 0;
}
