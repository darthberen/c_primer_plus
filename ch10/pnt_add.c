#include <stdio.h>

#define SIZE 4

int main(void)
{
    short dates[SIZE] = {0, 1, 2, 3};
    short *pti; // array notation
    short index;
    double bills[SIZE] = {4, 5, 6, 7};
    double *ptf; // pointer notation

    pti = dates; // assign address of array to pointer
    ptf = bills;

    printf("%23s %15s %15s %15s\n", "short", "double", "short val", "double val");
    for (index = 0; index < SIZE; index++) {
        // adding 1 to a pointer adds 1 "storage unit"
        printf("pointers + %d: %10p %10p %7d %16.2f \n",
               index, &pti[index], ptf + index, pti[index], *(ptf + index));
    }

    return 0;
}
