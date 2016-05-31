#include <stdio.h>

int main(void)
{
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 30, 31};
    const int other[] = {1, [4] = 8, 9, 3, [1] = 2}; // ex. of designated initializers
    int index;

    for (index = 0; index < sizeof(days) / sizeof(days[0]); index++) {
        printf("Month %2d has %d days.\n", index + 1, days[index]);
    }

    for (index = 0; index < sizeof(other) / sizeof(other[0]); index++) {
        printf("%d) %d\n", index, other[index]);
    }

    return 0;
}
