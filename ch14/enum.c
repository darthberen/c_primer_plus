#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN 30

char* s_gets(char *st, int n);

typedef char * STRING;
typedef struct {double x; double y;} rect;

// can assign value to a constant, unassigned values are sequential
enum example {VAL1 = 10, VAL2 = 20, VAL3 = 100, VAL4};

enum spectrum {RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET};
const char * colors[] = {"red", "orange", "yellow", "green", "blue", "violet"};

int main(void)
{
    STRING ex_str, name;
    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;

    printf("Color (enter to quit): ");
    while (s_gets(choice, LEN) != NULL && choice[0] != '\0') {
        for (color = RED; color <= VIOLET; color++) {
            if (strcmp(choice, colors[color]) == 0) {
                color_is_found = true;
                break;
            }
        }
        if (color_is_found) {
            switch (color) {
            case RED:
                puts("Roses are red");
                break;
            case ORANGE:
                puts("Poppies are orange");
                break;
            case YELLOW:
                puts("Sunflowers are yellow");
                break;
            case GREEN:
                puts("Grass is green");
                break;
            case BLUE:
                puts("Bluebells are blue");
                break;
            case VIOLET:
                puts("Violets are violet");
                break;
            }
        } else {
            printf("I don't know about the color %s\n", choice);
        }
        color_is_found  = false;
        printf("Next color (enter to quit): ");
    }
}

char *s_gets(char *st, int n)
{
    char *ret_val, *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find) {
            *find = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }

    return ret_val;
}
