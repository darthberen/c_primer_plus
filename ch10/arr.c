#include <stdio.h>

#define SIZE 10

int sum(int ar[], int n);
int sump(int *start, int *end);

int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer, answer2;

    answer = sum(marbles, SIZE);
    answer2 = sump(marbles, marbles + SIZE); // marbles + SIZE points to next element after the array
    printf("Total marbles: %ld\n", answer);
    printf("Total marbles: %ld\n", answer2);
    printf("Size of marbles: %zd bytes\n", sizeof(marbles)); // actual array 40 bytes (10 4 byte ints)

    return 0;
}

int sum(int ar[], int n)
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++) {
        total += ar[i];
    }
    // printf("Size of ar: %zd bytes\n", sizeof(ar)); // pointer to array so 8 bytes

    return total;
}

// pointer arithmetic
int sump(int *start, int *end)
{
    int total = 0;

    while (start < end) {
        total += *start; // adds value
        start++; // advances pointer to next element
    }

    return total;
}
