#include <stdio.h>

int main()
{
    double x, y, x_plus_y, x_minus_y;

    printf("Value of x + y = ");
    scanf("%lf", &x_plus_y);

    printf("Value of x - y = ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("x = %0.2lf\n", x);
    printf("y = %0.2lf\n", y);

    return 0;
}