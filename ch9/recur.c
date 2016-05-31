#include <stdio.h>

void up_and_down(int);

int main(void)
{
    up_and_down(1);

    return 0;
}

void up_and_down(int n)
{
    char fmt[30] = "Level %d:, n location %p\n";

    printf(fmt, n, &n);
    if (n < 4) {
        up_and_down(n + 1);
    }
    printf(fmt, n, &n);
}
