#include <stdio.h>
#include <string.h>

void fit(char * str, unsigned int size);

int main(void)
{
    char msg[] = "Things should be as simple as possible,"
        "but not simpler";
    char ninjas[] = "Fighting ninjas is ";
    char exist[13] = "I am ";
    char exist2[13];

    puts("strlen");
    puts(msg);
    fit(msg, 38);
    puts(msg);
    printf("The rest of the string: ");
    puts(msg + 39);

    puts("\nstr(n)cat");
    puts(strcat(ninjas, msg + 43));  // strcat: joins two strings - can buffer overflow
    printf("%s is %d chars long with an array sizeof %d\n",
           exist, strlen(exist), sizeof(exist) / sizeof(exist[0]));
    // strncat: reads up to \0 or specified size
    puts(strncat(exist, msg + 39, (sizeof(exist) / sizeof(exist[0])) - strlen(exist)));

    puts("\nstr(n)cmp");
    printf("A to A: %d\n", strcmp("A", "A"));
    printf("A to B: %d\n", strcmp("A", "B"));
    printf("B to A: %d\n", strcmp("B", "A"));
    printf("[n = 5] apple to apples: %d\n", strncmp("apple", "apples", 5));
    printf("[n = 6] apple to apples: %d\n", strncmp("apple", "apples", 6));

    puts("\nstr(n)copy");
    strcpy(exist2, exist); // can buffer overflow
    puts(exist2);
    const char *orig = "beast";
    char copy[40] = "be the best that you can be.";
    char *ps;
    puts(orig);
    puts(copy);
    ps = strncpy(copy + 7, orig, 3);
    puts(copy);
    puts(ps);
    ps = strncpy(copy + 7, orig, 40 - 8);
    puts(copy);
    puts(ps);

    puts("\nsprintf");
    char charge[40];
    sprintf(charge, "You own $%.2f so pay up %s\n", 64.1239, "Billy Boy");
    puts(charge);

    return 0;
}

// strlen: finds length of string
void fit(char *str, unsigned int size)
{
    if (strlen(str) > size) {
        str[size] = '\0';
    }
}
