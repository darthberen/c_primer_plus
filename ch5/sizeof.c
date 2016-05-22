#include <stdio.h>

typedef double real; // alias for type double

int main(void)
{
    int n = 0;
    size_t intsize;
    real deal = 1.1;

    intsize = sizeof(int);
    printf("N = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof(n), intsize);
    printf("Real deal %f\n", deal);

    return 0;
}
