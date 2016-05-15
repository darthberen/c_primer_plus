#include <stdio.h> // example of preprecessor directive

int main(void) { // function header
  /* declaration statement - connects identifier with location in memory (and
   * type of information stored at this location */
    int num;
    num = 1; // assignment statement - stores value in memory at idenifier location
    // traditionally, C has variables declared at beginning of block (C99+ not required)

    printf("I am a simple "); // actual argument
    printf("computer.\n"); // escape sequence "\n"
    printf("My favorite number is %d because it is first.\n", num);

    return 0;
}
