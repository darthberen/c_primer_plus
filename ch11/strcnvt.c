#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LIM 30

char* s_gets(char *str, int size);

int main()
{
    char number[LIM];
    char *end;
    long value;
    int size;

    // other funcs: atoi, atof, atol, strtol, strtoul, strtod
    puts("Enter a number (empty line to quit):");
    while (fgets(number, LIM, stdin) != NULL && number[0] != '\n') {
        size = strlen(number);
        number[size - 1] = '\0';
        value = strtol(number, &end, 10);
        printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n",
                value, end, *end);
        value = strtol(number, &end, 16);
        printf("base 10 input, base 16 output: %ld, stopped at %s (%d)\n",
                value, end, *end);
    }
}
