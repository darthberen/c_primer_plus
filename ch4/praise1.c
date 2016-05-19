#include <stdio.h>

#define PRAISE "You are an extraordinary human being."

int main(void) {
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);  // stops reading at the first whitespace
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}
