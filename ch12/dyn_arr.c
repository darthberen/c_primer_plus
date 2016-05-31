#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double * ptd;
    int number;
    int max = 0, i = 0;

    puts("What is the maximum number fo type double entries?");
    if (scanf("%d", &max) != 1) {
        puts("Number not correctly entered --bye");
        exit(EXIT_FAILURE);
    }
    // could also use calloc(num items, size of item) - another difference is it sets bits to 0
    ptd = (double *) malloc(max * sizeof(double));
    if (ptd == NULL) {
        puts("Memory allocation failed. Bye");
        exit(EXIT_FAILURE);
    }

    puts("Enter the values (q to quit)");
    while (i < max && scanf("%lf", &ptd[i]) == 1) {
        ++i;
    }
    printf("Here are your %d entries:\n", number = i);
    for (i = 0; i < number; i++) {
        printf("%7.2f ", ptd[i]);
        if (i % 7 == 6) {
            putchar('\n');
        }
    }
    if (i % 7 != 0) {
        putchar('\n');
    }
    puts("done");
    free(ptd);

    return EXIT_SUCCESS;
}
