// HCF

#include <stdio.h>
/*
int main()
{
    int a, b, x, gcd;

    printf("Input First Number : ");
    scanf("%d", &a);
    printf("Input Second Number : ");
    scanf("%d", &b);

    if (a < b)
    {
        x = a;
    } else
    {
        x = b;
    }

    for (; x >= 1; x--)
    {
        if (a % x == 0 && b % x == 0)
        {
            gcd = x;
            break;
        }
    }

    printf("The Result is : %d\n", gcd);

    return 0;
} */

int main()
{
    int a, b, x, y, z = 1, gcd;

    printf("First Number : ");
    scanf("%d", &a);
    printf("Second Numver : ");
    scanf("%d", &b);

    if (a == 0 || b == 0) gcd = 0;
    else
    {


        if (a > b)
        {
            x = a;
            y = b;
        } else
        {
            x = b;
            y = a;
        }

        while(z != 0)
        {
            if (x % y == 0)
            {
                gcd = y;
                break;
            }
            else
            {
                z = x % y;
                x = y;
                y = z;
            }
        }
    }

    printf("The GCD is %d\n", gcd);
    return 0;
}

