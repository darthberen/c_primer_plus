#include <stdio.h>

int main(void)
{
    const int SQUARES = 64;  // num squares on checkerboard
    const double CROP  = 2e16;  // world wheat production in wheat grains
    double current, total;
    int count = 1;

    printf("square     grains       total     ");
    printf("fraction of \n");
    printf("           added        grains    ");
    printf("world total\n");
    total = current = 1.0;  // start with 1 grain
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
    while (count < SQUARES) {
        count = count + 1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
    }
    printf("That's all.\n");

    return 0;
}
