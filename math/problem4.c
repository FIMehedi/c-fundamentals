#include <stdio.h>

int main()
{
    double v, t;

    printf("v = ");
    scanf("%lf", &v);

    printf("t = ");
    scanf("%lf", &t);

    printf("2t = %0.2lf\n", 2*t*v);

    return 0;
}