#ifndef NAMES_H_
#define NAMES_H_

#include <string.h>

#ifdef LARGE
    #define SLEN 100
#else
    #define SLEN 32
#endif 

struct names_st {
    char first[SLEN];
    char last[SLEN];
};

typedef struct names_st names;

void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);

#endif
