#include <stdio.h>

int main(void)
{
    int term_cnt, limit;
    double time, power_of_2;

    printf("Enter the number of terms you want: ");
    scanf("%d", &limit);
    for (time = 0, power_of_2 = 1, term_cnt = 1; term_cnt < limit; term_cnt++, power_of_2 *= 2) {
        time += 1 / power_of_2;
        printf("time = %f when terms = %d\n", time, term_cnt);
    }

    return 0;
}
