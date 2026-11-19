/* temperature conversion using for loop F to C */

#include <stdio.h>

int main(void){
    int f;

    for (f = 0; f <= 300; f = f + 20)
        printf("%3d %6.1f\n", f, (5.0/9.0) * (f - 32));

    return 0;
}
