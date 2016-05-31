#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "diceroll.h"

int main(void)
{
    int dice, roll, sides;

    srand((unsigned int) time(0)); // randomize seed

    printf("Enter the number of sides per die, 0 to stop: ");
    while (scanf("%d", &sides) == 1 && sides > 0) {
        printf("How many dice? ");
        int status;
        if ((status = scanf("%d", &dice)) != 1) {
            if (status == EOF) {
                break;
            } else {
                printf("You shoul have entered an integer\n");
                printf("let's begin again\n");
                while (getchar() != '\n') {
                    continue; // dispose of bad input
                }
                printf("Enter the number of sides per die, 0 to stop: ");
                continue;
            }
        }

        roll = roll_n_dice(dice, sides);
        printf("You ahve rolled a %d using %d %d-sided dice\n", roll, dice, sides);
        printf("Enter the number of sides per die, 0 to stop: ");
    }
    printf("The rollem() function was called %d times\n", roll_count);

    printf("GOOD FORTUNE TO YOU!\n");

    return 0;
}
