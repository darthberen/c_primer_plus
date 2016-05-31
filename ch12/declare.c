#include <stdio.h>

int tern = 1; // defining declaration - do this to create an external definition (usable from any file)
static int stay_home = 1; // static variable, internal linkage (only usable by functions in this file)
static void local(void); // only available in file
extern void global(void); // available to other files

// there is also _Thread_local storage class specifier (can be used with static or extern)

int main(void)
{
    extern int tern; // optional (referencing declaration) - do this to refer to an existing external definition
    extern int stay_home; // optional - does not make a static var visible to other files

    // register - might use cpu registers to store variable
    register int reg_var = 11; // note: can't use address of register variable
    printf("register: %d\n", reg_var);

    printf("\nfrom main tern: %d\n", tern);
    printf("from main stay_home: %d\n", stay_home);

    local();
    global();

    return 0;
}

void local(void)
{
    auto int tern = 3;
    auto int stay_home = 3;
    printf("from local tern: %d\n", tern);
    printf("from local stay_home: %d\n", stay_home);
}

void global(void)
{
    printf("from global tern: %d\n", tern);
    printf("from global stay_home: %d\n", stay_home);
}
