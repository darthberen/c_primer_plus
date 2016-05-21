#include <stdio.h>

#define BLURB "Authentic imitation!"

int main(void) {
    const int PAGES = 959;
    const double RENT = 3852.99;

    printf("%x %x %#x\n\n", 31, 31, 31);

    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%010d*\n", PAGES);
    printf("*%-10d*\n\n", PAGES);

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n\n", RENT);

    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);

    return 0;
}
