#include <stdio.h>

extern void srand1(unsigned int x);
extern int rand1(void);

int main(void)
{
    int count;
    unsigned seed;

    printf("Enter your seed: ");
    while (scanf("%ul", &seed) == 1) {
        srand1(seed);
        for (count = 0; count <5; count++) {
            printf("%d\n", rand1());
        }
        printf("Enter your seed: ");
    }
    puts("done");

    return 0;
}
