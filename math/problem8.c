// LCM

#include <stdio.h>

int main ()
{
    int a, b, x, gcd, lcm;

    printf("Enter a, b : ");
    scanf("%d %d", &a, &b);

    int mult = a * b;

    // First we need GDC.
    if (a == 0 || b == 0) gcd = 0;
    else {
        while (b != 0)
        {
            x = b;
            b = a % b;
            a = x;

        }
        gcd = a;
    }

    lcm = mult / gcd;

    printf("LCM = %d\n", lcm);

}
