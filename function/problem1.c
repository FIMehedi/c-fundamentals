#include <stdio.h>

int array_min(int array[], int n);

int main()
{
    int array[] = {43, 99, 54, -76, 12, 87, 2, 33};

    int min = array_min(array, 8);

    printf("min Num is : %d\n", min);

    return 0;
}

int array_min(int array[], int n)
{
    int min_num = array[0];

    for (int i = 0; i < n; i++)
    {
        if (array[i] < min_num)
        {
            min_num = array[i];
        }
    }

    return min_num;
}