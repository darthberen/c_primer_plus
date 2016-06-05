// #define NDEBUG // ignores assert statements if enabled BEFORE assert.h

#include <stdio.h>
#include <assert.h>
#include <limits.h>

// compile time check
// _Static_assert(CHAR_BIT == 16, "16-bit char falsely assumed");

int main(void)
{
    int x = 8, y = 9;

    assert(x == y); // runtime check

    return 0;
}
