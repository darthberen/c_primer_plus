#include <stdio.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100


char *s_gets(char *st, int n);

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index;

    printf("Book title: ");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
           && library[count].title[0] != '\0') {
        printf("Author: ");
        s_gets(library[count].author, MAXAUTL);
        printf("Value: ");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n') {
            continue;
        }
        if (count < MAXBKS) {
            printf("Next title: ");
        }
    }

    if (count > 0) {
        printf("Here is a list of your books:\n");
        for (index = 0; index < count; index++) {
            printf("%s by %s: $%.2f\n", library[index].title,
                   library[index].author, library[index].value);
        }
    } else {
        puts("No books? Too bad");
    }

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val, *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find) {
            *find = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }

    return ret_val;
}
