/* use of symbolic constants in temperature conversion program */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void){
    int f;

    for (f = LOWER; f <= UPPER; f = f + STEP)
        printf("%3d %6.1f\n", f, (5.0/9.0) * (f - 32));

    return 0;
}
