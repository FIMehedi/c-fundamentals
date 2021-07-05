// #include <stdio.h>

// int main()
// {
//     double a, b, sum;

//     a = 32.54;
//     b = 65.34;

//     sum = a + b;

//     printf("Sum is : %lf\n", sum);
//     printf("Sum is : %0.2lf\n", sum);
//     printf("Sum is : %0.0lf\n", sum);

//     printf("Sum is : %d\n", (int)sum);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double a, b, sum;

//     scanf("%lf %lf", &a, &b);

//     sum = a + b;

//     printf("Sum is : %0.2lf\n", sum);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char name;

//     scanf("%c", &name);
//     printf("You Entered : %c", name);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char name;

//     name = getchar();
//     printf("You Entered : %c", name);\
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double num1, num2, sum, sub, mul, div;

//     printf("Please Enter The First Number: ");
//     scanf("%lf", &num1);

//     printf("Please Enter The Second Number: ");
//     scanf("%lf", &num2);

//     sum = num1 + num2;
//     sub = num1 - num2;
//     mul = num1 * num2;
//     div = num1 / num2;

//     printf("%0.2lf %c %0.2lf = %0.2lf\n", num1, '+' ,num2, sum);
//     printf("%0.2lf %c %0.2lf = %0.2lf\n", num1, '-' ,num2, sub);
//     printf("%0.2lf %c %0.2lf = %0.2lf\n", num1, '*' ,num2, mul);
//     printf("%0.2lf %c %0.2lf = %0.2lf\n", num1, '/' ,num2, div);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     a = 99;
//     b = ;

//     c =a - (a / b) * b;

//     printf("%d\n", c);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char letter = 'a';

//     if (letter >= 'a' && letter <= 'z')
//     {
//         printf("This is Lowercase Letter\n");
//     }
//     else if (letter >= 'A' && letter <= 'Z')
//     {
//         printf("This is Uppercase Letter\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 1;

//     while (n <= 10)
//     {
//         printf("%d\n", n);
//         n++;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 0;

//     while (i < 10)
//     {
//         i++;
//         if (i % 2 == 0)
//         {
//             continue;
//         }
//         printf("%d\n", i);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 1, x;

//     scanf("%d", &x);

//     while (i <= 10)
//     {
//         printf("%d * %d = %d\n", x, i, x * i);
//         i++;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int x, y, z;
//     scanf("%d", &x);

//     z = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         z = z + x;
//         printf("%d * %d = %d\n", x, i, z);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                if (i != j && j != k && k != i)
                {
                    printf("%d, %d, %d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}