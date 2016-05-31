#include <stdio.h>
#include <stdlib.h>

// variable can have have altered by agencies other than program (file, hardware address, threads, etc.)
volatile int loc1;

int main(void)
{
    // restr is the sole initial means of access to the memory
    int * restrict restr = (int *) malloc(10 * sizeof(int));
}
