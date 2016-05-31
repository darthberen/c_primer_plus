#include <stdio.h>

#define STLEN 14

void put1(const char *string);
char * s_gets(char *st, int n);

int main(void)
{
    char words[STLEN];

    puts("Enter a string: ");
    fgets(words, STLEN, stdin);
    puts("Your string:");
    fputs(words, stdout);

    put1("Enter another string: ");
    char *words2 = s_gets(words, STLEN);
    put1("Your string: ");
    put1(words2);
    put1("\n");

    puts("\nEnter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n') {
        int i = 0;
        while (words[i] != '\n' && words[i] != '\0') {
            i++;
        }
        if (words[i] == '\n') {
            words[i] = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
        puts(words);
        // fputs(words, stdout); // use 
    }
    puts("Done");

    return 0;
}

// Acts like puts but does not automatically add a newline
void put1(const char *string)
{
    while (*string != '\0') {
        putchar(*string++);
    }
}

// Acts like gets_s.  Reads in a string of length n and replaces
// any newlines.
char * s_gets(char *st, int n)
{
    char *ret_val;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        int i = 0;
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }
        if (st[i] == '\n') {
            st[i] = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    
    return ret_val;
}
