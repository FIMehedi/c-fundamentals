#include <stdio.h>

int main()
{
    int age[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    printf("Age =\t");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", age[i]);
    }
    printf("\n");

    for (int i = 0, j = 9; i < 5; i++, j--)
    {
        int temp = age[j];
        age[j] = age[i];
        age[i] = temp;
    }

    printf("Inv =\t");
    for (int i = 0, j = 9; i < 10; i++, j--)
    {
        printf("%d\t", age[i]);
    }
    printf("\n");

    return 0;
}