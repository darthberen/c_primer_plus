#include <stdio.h>

#define ROWS 3
#define COLS 4

// need to supply the COLS because C needs to know the object size to which ar points
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int [][COLS], int);
int sum2d(int (*ar)[COLS], int rows);
// rows and cols have to be declared before ar
// vla: variable length array (just means you can use a variable for array length)
int vla_sum2d(int rows, int cols, int ar[rows][cols]);

int main(void)
{
    int junk[ROWS][COLS] = {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6},
    };
    int (*pt1)[4];
    pt1 = (int[][4]){ {1, 2, 3, -9}, {4, 5, 6, -8}}; // array literal

    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    printf("Sum of all elements = %d\n", sum2d(junk, ROWS));
    printf("Sum of all elements = %d\n", vla_sum2d(ROWS, COLS, junk));
    printf("Sum of all elements = %d\n", vla_sum2d(2, 4, pt1));

    return 0;
}

void sum_rows(int ar[][COLS], int rows)
{
    int r, c, tot;

    for (r = 0; r < rows; r++) {
        tot = 0;
        for (c = 0; c < COLS; c++) {
            tot += ar[r][c];
        }
        printf("row %d: sum = %d\n", r, tot);
    }
}

void sum_cols(int ar[][COLS], int rows)
{
    int r, c, tot;

    for (c = 0; c < COLS; c++) {
        tot = 0;
        for (r = 0; r < rows; r++) {
            tot += ar[r][c];
        }
        printf("col %d: sum = %d\n", c, tot);
    }
}

int sum2d(int ar[][COLS], int rows)
{
    int r, c, tot = 0;

    for (r = 0; r < rows; r++) {
        for (c = 0; c < COLS; c++) {
            tot += ar[r][c];
        }
    }

    return tot;
}

int vla_sum2d(int rows, int cols, int ar[rows][cols])
{
    int r, c, tot = 0;

    for (r = 0; r < rows; r++) {
        for (c = 0; c < cols; c++) {
            tot += ar[r][c];
        }
    }

    return tot;
}
