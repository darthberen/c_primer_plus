#include <stdio.h>

int main(void)
{
    int age, items_read;
    float assets;
    char pet[30];
    char single_char;

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);  // uses whitespace to decide how to divide up input
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    printf("Enter the best character ever: ");
    // skips all whitespace and picks up the first nonwhitespace char
    items_read = scanf(" %c", &single_char);
    printf("I agree with %c (and read %d items)\n", single_char, items_read);

    return 0;
}
