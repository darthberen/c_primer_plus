#include <stdio.h>

#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    char greeting[] = "Hello" " " "world!";
    // when using a pointer for a string literal it should be a const
    // this is because the compiler may represent all identical string literals
    // with a single copy in memory
    const char *pt1 = "Something is pointing at me.";
    const char *copy;
    char input[MAXLENGTH];

    copy = pt1; // only points to start pf pt1 - does not copy string

    puts("Here are some strings");
    puts(MSG);
    puts(greeting);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);

    printf("pt1 = %s, &pt1 = %p, value = %p\n", pt1, &pt1, pt1);
    printf("copy = %s, &copy = %p, value = %p\n", copy, &copy, copy);

    puts("Enter a string:");
    gets(input); // deprecated - doesn't check for buffer overflow, etc.
    printf("You entered '%s'\n", input);

    return 0;
}
