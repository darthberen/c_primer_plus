#include <stdio.h>

#define PI 3.1415
#define CH 'a'
#define STR "Hello there"

int main(void) {
    const float BETTER_PI = 3.14159;
    const char BEST_CHAR = 'm';
    const char NAME[7] = "you";

    printf("pi: %f and better pi %f\n", PI, BETTER_PI);
    printf("char: %c and best char: %c\n", CH, BEST_CHAR);
    printf("%s %s\n", STR, NAME);

    return 0;
}
