#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(void)
{
    char c;
    char prev;
    long n_chars = 0L;
    int n_lines = 0, n_words = 0, p_lines = 0;
    bool inword = false;

    printf("Enter text to be analyzed(| to terminate):\n");
    prev = '\n';
    while ((c = getchar()) != STOP) {
        n_chars++; // count chars
        if (c == '\n') { // count lines
            n_lines++;
        }
        if (!isspace(c) && !inword) { // count words
            inword = true;
            n_words++;
        }
        if (isspace(c) && inword) { // end of word
            inword = false;
        }
        prev = c;
    }
    if (prev != '\n') {
        p_lines = 1;
    }
    printf("characters = %ld, words = %d,lines = %d\n", n_chars, n_words, n_lines);

    return 0;
}
