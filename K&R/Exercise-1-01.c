/* Run the ``hello, world'' program on your system. Experiment with leaving
out parts of the program, to see what error messages you get. */


#include <stdio.h>

int main(void){
    printf("hello, world \n");
    return 0;
}


/*
1. No semicolon

1_01_ex.c:4:30: error: expected ';' after expression
    4 |     printf("hello, world \n")
      |                              ^
      |                              ;
1 error generated.

2. no return code allows the program to run so does not not specifying void in main function declaration

3. Removing a " leads to errors

1_01_ex.c:4:12: error: use of undeclared identifier 'hello'; did you mean 'ftello'?
    4 |     printf(hello, world \n");
      |            ^~~~~
      |            ftello
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h:433:8: note: 'ftello' declared here
  433 | off_t    ftello(FILE * __stream);
      |          ^
1_01_ex.c:4:19: error: use of undeclared identifier 'world'
    4 |     printf(hello, world \n");
      |                   ^
1_01_ex.c:4:27: warning: missing terminating '"' character [-Winvalid-pp-token]
    4 |     printf(hello, world \n");
      |                           ^
1 warning and 2 errors generated.

*/