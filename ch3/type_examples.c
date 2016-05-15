#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {
    /* common practice is to treat the following types as follows:
     * int: 16/32 bits
     * short: 16 bits
     * long 32 bits
     * long long 66 bits
     */
    int i0 = 11, i1 = 0x5c, i2 = 020;
    long l0 = 7, l1 = 7L;
    long long ll0 = 12, ll1 = 12LL;
    unsigned long long ull0 = 13ULL;
    short s0 = 3;
    char grade = 'A', grade2 = 65;
    _Bool isTrue = 1, isFalse = 0;

    /* There are also portable types for integers (since def may vary)
     * C99 or C11 defined
     * can find them in stdint.h
     */
    // exact width example
    int32_t exactInt = 32;
    // minimum width example
    int_least8_t leastInt = 100;
    // fastest minimum width example
    int_fast32_t fastInt = 1000;
    // max int size
    intmax_t maxInt = 100000000;
    uintmax_t maxUint = 100;

    /* float:  suppose to be able to represent at least 6 sig digits
     * and allow for range 10e(+-)37
     * usually 8bits given to exponent value/sign an 24 bits to significand/sign
     * double is same as float but extends min sig figures to 10 - usually use 64bits
     * long double is only guaranteed to be at least as precise as double
     * f3 is hexadecimal powers of 2 notation
     */
    float f0 = 2e10, f1 = 11.0, f2 = 14.65f, f3 = 0xa.1cp10;
    double d0 = 123.122312E-39, d1 = 34e4;
    long double ld0 = 59L;
    float toobig = 3.48e38 * 100.0f;

    /* There is support for complex and imaginary numbers
     * float _Complex
     * double _Complex
     * long double _Complex
     * float _Imaginary
     * double _Imaginary
     * long double _Imaginary
     * can include complex.h to replace _Complex with complex and _Imaginary with imaginary
     */

    printf("ints:\n");
    printf("\t%d (base 10)\n", i0);
    printf("\t%d %x %#x(base 16 hexadecimal)\n", i1, i1, i1);
    printf("\t%d %o %#o (base 8 octal)\n", i2, i2, i2);
    printf("floats:\n");
    printf("\t%f, %.2f, %e, %a\n", f0, f0, f0, f0);
    printf("\t%f, %a, %e\n", f3, f3, f3);
    printf("\t%f, %f\n", f1, f2);
    printf("\t%f\n", toobig);
    printf("doubles:\n");
    printf("\t%f, %e, %a, %f\n", d0, d0, d0, d1);
    printf("\t%Lf, %Le, %La\n", ld0, ld0, ld0);
    printf("longs:\n");
    printf("\t%ld, %ld, %#lx\n", l0, l1, l1);
    printf("\tlong long: %lld, %#llx\n", ll1, ll1);
    printf("\tunsigned long long: %llu\n", ull0);
    printf("shorts:\n");
    printf("\t%hd, %#ho\n", s0, s0);
    printf("chars:\n");
    printf("\t%c %c (%d)\n", grade, grade2, grade2);
    printf("bools:\n");
    printf("\t%d %d\n", isTrue, isFalse);
    printf("portable ints:\n");
    printf("\t%" PRId32 "\n", exactInt);
    printf("\tPRILEASTd8 %d\n", leastInt);
    printf("\tPRIFASTd32 %d\n", fastInt);
    printf("\t%" PRIdMAX " %" PRIuMAX "\n", maxInt, maxUint);

    return 0;
}
