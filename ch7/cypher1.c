#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Enter characters to by cyphered:\n");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            putchar(ch);
        } else {
            putchar(ch + 1);
        }
    }
    putchar(ch);

    return 0;
}
