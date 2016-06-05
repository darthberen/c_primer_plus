#include <stdio.h>

#include "names_st.h"

#ifndef EXAMPLE
    #define EXAMPLE "example"
#endif
//#define DEBUG
#define LOGLEVEL 2

int main(void)
{
    names candidate;

    get_names(&candidate);
    printf("Let's welcome ");
    show_names(&candidate);
    printf(" to this %s program!\n", EXAMPLE);
#ifdef DEBUG
    puts("some random debug statement\n");
#endif
#if defined(DEBUG)
    puts("another debug thingy");
#elif defined(LOGLEVEL)
    puts("we got some real loglevel action");
#endif
#if LOGLEVEL == 1
    puts("loglevel 1 msg");
#elif LOGLEVEL == 2
    puts("loglevel 2 msg");
#endif

    printf("the file is %s\n", __FILE__);
    printf("the date is %s\n", __DATE__);
    printf("the time is %s\n", __TIME__);
    printf("the version is %ld\n", __STDC_VERSION__);
    printf("this is line %d\n", __LINE__);
    printf("this function is %s\n", __func__);

#line 1
    printf("this is line %d\n", __LINE__);

    return 0;
}

#undef EXAMPLE
