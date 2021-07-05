#include <stdio.h>

int main()
{
    double celsius, fahrenheit;

    printf("Value of fahrenheit : ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;

    printf("Value of celsius : %0.2lf\n", celsius);

    return 0;
}