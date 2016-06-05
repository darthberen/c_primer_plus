#include <stdio.h>

#define MYTYPE(X) _Generic((X),\
    int: "int",\
    float: "float",\
    double: "double",\
    default: "other"\
)

inline static int square(const int x)
{
    return x * x;
}

int main(void)
{
    int d = 5;

    printf("%s\n", MYTYPE(d));
    printf("%s\n", MYTYPE(2.0*d));
    printf("%s\n", MYTYPE(3L));
    printf("%s\n", MYTYPE(&d));
    printf("%d\n", square(d));

    return 0;
}
