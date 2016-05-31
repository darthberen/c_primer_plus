#include <stdio.h>

int main(void)
{
    int data[2] = {100, 200};
    int data2[2] = {300, 300};
    int *p1, *p2, *p3;

    p1 = p2 = data;
    p3 = data2;

    printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);

    return 0;
}
