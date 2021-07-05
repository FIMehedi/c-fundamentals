#include <stdio.h>


void try_to_change(int array[])
{
    // array[0] = 55;
    return;
}

int main()
{
    int array[] = {4, 6, 8}, a = 5;

    try_to_change(array);

    printf("%d\n", array[0]);

    return 0;
}

