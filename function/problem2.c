#include <stdio.h>

double PI = 3.1416;

double circle_area(double radius);

int main()
{
    double radius = 5;

    double area = circle_area(radius);

    printf("Area : %0.2lf\n", area);

    return 0;
}

double circle_area(double radius)
{
    double area = PI * radius * radius;
    return area;
}