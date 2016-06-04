#include <stdio.h>
#include <math.h>  // need to link libm: use -lm flag

#define RAD_TO_DEG (180 / (4 * atan(1)))

typedef struct polar_v {
    double magnitude;
    double angle;
} Polar_V;

typedef struct rect_v {
    double x;
    double y;
} Rect_V;

Polar_V rect_to_polar(Rect_V);

int main(void)
{
    Rect_V input;
    Polar_V result;

    printf("Enter x and y coordinates (q to quit): ");
    while (scanf("%lf %lf", &input.x, &input.y) == 2) {
        result = rect_to_polar(input);
        printf("Magnitude: %.2f, angle: %.2f\n", result.magnitude, result.angle);
        printf("Enter x and y coordinates (q to quit): ");
    }
    puts("Bye");

    return 0;
}

Polar_V rect_to_polar(Rect_V rv)
{
    Polar_V pv;

    pv.magnitude = sqrt((rv.x * rv.x) + (rv.y * rv.y));
    if (pv.magnitude == 0) {
        pv.angle = 0;
    } else {
        pv.angle = RAD_TO_DEG * atan2(rv.y, rv.x);
    }

    return pv;
}
