#include <stdio.h>

// object like macros
#define TWO 2
#define OW "Consistency is the last refuge of the unimagina\
tive. - Oxcar Wilde"
#define FOUR TWO*TWO  // nested macro
#define FMT "X is %d.\n"
#define PX printf("X is %d.\n", x)

// function like macros
#define SQUARE(X) X*X
#define PR(x) printf("The result is " #x " from %d\n", x) // #x converts tokens into strings (stringizing)

// ## operator - combines two tokens into a single token
#define XNAME(n) x ## n
#define PRINT_XN(n) printf("x" #n " = %d\n", x ## n)

// variadic args - ellipses has to be last argument
#define PR_VAR(X, ...) printf("Message " #X ": " __VA_ARGS__);

int main(void)
{
    int x = TWO;
    int XNAME(1) = 14; // int x1 = 14;
    int x2 = 20;
    double y = 28.1234;

    PRINT_XN(1);
    PRINT_XN(2);

    PX;
    x = FOUR; // becomes TWO*TWO then 2*2
    printf(FMT, x);
    x = SQUARE(x);
    PR(x);
    PR(2 + 4);
    printf("%s\n", OW);
    printf("TWO: OW\n"); // macros are not replaced inside double quotes
    PR_VAR(1, "\n");
    PR_VAR(2, "x = %d, y = %.2f\n", x, y);

    return 0;
}
