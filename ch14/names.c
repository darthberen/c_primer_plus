#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SLEN 81

struct namect {
    char *fname;
    char *lname;
    int letters;
};
struct rect { double x; double y; };

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *);
double rect_area(struct rect *rp) { return rp->x * rp->y; }
char *s_gets(char *st, int n);

int main(void)
{
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    cleanup(&person);

    double area = rect_area( &(struct rect) {10.5, 20.0});
    printf("Area is %lf\n", area);

    return 0;
}

void getinfo(struct namect *pst)
{
    char temp[SLEN];
    printf("First name: ");
    s_gets(temp, SLEN);
    pst->fname = (char *) malloc(strlen(temp) + 1); // allocate memory to hold name
    strcpy(pst->fname, temp); // copy name to allocated memory

    printf("Last name: ");
    s_gets(temp, SLEN);
    pst->lname = (char *) malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);
}

void makeinfo(struct namect *pst)
{
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect *pst)
{
    printf("%s %s, your name contains %d letters\n", pst->fname, pst->lname, pst->letters);
}

void cleanup(struct namect *pst)
{
    free(pst->fname);
    free(pst->lname);
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
