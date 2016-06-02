#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

char * itobs(int, char *);
void show_bstr(const char *);
int invert_end(int num, int bits);

// example of a bitfield
struct box_props {
    bool opaque: 1;
    unsigned int fill_color: 3;
    unsigned int: 4; // this is padding
    bool show_border;
};

int main(void)
{
    char bin_str[CHAR_BIT * sizeof(int) + 1];
    int number;
    int inv = 8;

    struct box_props box = {true, 3, false};

    puts("Enter integers and see them in binary");
    puts("Non-numeric input terminates program");
    while (scanf("%d", &number) == 1) {
        itobs(number, bin_str);
        printf("%d is ", number);
        show_bstr(bin_str);
        putchar('\n');

        number = invert_end(number, inv);
        itobs(number, bin_str);
        printf("inverted last %d bits (%d) is ", inv, number);
        show_bstr(bin_str);
        putchar('\n');
    }
    puts("Bye!");

    return 0;
}

char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);

    for (i = size - 1; i >= 0; i--, n >>= 1) {
        ps[i] = (01 & n) + '0';
    }
    ps[size] = '\0';
    
    return ps;
}

void show_bstr(const char * str)
{
    int i = 0;

    while (str[i]) {
        putchar(str[i]);
        if (++i % 4 == 0 && str[i]) {
            putchar(' ');
        }
    }
}

int invert_end(int num, int bits)
{
    int mask = 0, bitval = 1;

    while (bits-- > 0) {
        mask |= bitval;
        bitval <<= 1;
    }

    return num ^ mask;
}
