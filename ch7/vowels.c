#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int a_cnt, e_cnt, i_cnt, o_cnt, u_cnt, other;
    a_cnt = e_cnt = i_cnt = o_cnt = u_cnt = other = 0;

    printf("Enter some text (# to quit):\n");
    while ((ch = getchar()) != '#') {
        switch (toupper(ch)) { // needs to be ints/chars
        case 'A':
            a_cnt++;
            break;
        case 'E':
            e_cnt++;
            break;
        case 'I':
            i_cnt++;
            break;
        case 'O':
            o_cnt++;
            break;
        case 'U':
            u_cnt++;
            break;
        default:
            other++;
        }
    }
    printf("Counts:    A    E    I    O    U    Other\n");
    printf("        %4d %4d %4d %4d %4d   %4d\n",
            a_cnt, e_cnt, i_cnt, o_cnt, u_cnt, other);
    (other > 10) ? printf("That's a lot of consonants yo\n") : printf("Get some consonants in your life bro\n");

    return 0;
}
