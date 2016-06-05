#include <stdio.h>
#include <stdlib.h>

void sign_off(void);
void too_bad(void);

int main(void)
{
    int n;

    atexit(sign_off);
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        puts("Nice try buddy boy - that's no integer!");
        atexit(too_bad);
        exit(EXIT_FAILURE);
    }
    printf("%d is %s\n", n, (n % 2 == 0) ? "even" : "odd");

    return 0;
}

void sign_off(void)
{
    puts("Thus terminates another awesome program by ");
    puts("SeeSaw Software");
}

void too_bad(void)
{
    puts("SeeSaw software extends its heartfelt condolences");
    puts("to you upon the failure of your program");
}
