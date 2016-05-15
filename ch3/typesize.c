#include <stdio.h>

int main(void) {
    printf("Int: %zd bytes\n", sizeof(int));
    printf("Char: %zd bytes\n", sizeof(char));
    printf("Long: %zd bytes\n", sizeof(long));
    printf("Long Long: %zd bytes\n", sizeof(long long));
    printf("Double: %zd bytes\n", sizeof(double));
    printf("Long double: %zd bytes\n", sizeof(long double));

    return 0;
}
