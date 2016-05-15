#include <stdio.h>

void butler(void); // ANSI/ISO C function prototyping - tells compiler about functions to be used

int main(void) {
    printf("I will summon the butler function.\n");
    butler(); // function call
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void) { // start of function definition
    printf("You rang, sir?\n");
}
