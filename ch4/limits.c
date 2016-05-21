#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("Some number limits on this system:\n");
    printf("Max int: %d\n", INT_MAX);
    printf("Min int: %d\n", INT_MIN);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("Float significant digits: %d\n", FLT_DIG);
    printf("Float mantissa bits: %d\n", FLT_MANT_DIG);
    printf("Float epsilon: %e\n", FLT_EPSILON);

    return 0;
}
