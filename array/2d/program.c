#include <stdio.h>

int finalResult(int mark1, int mark2, int mark3)
{
    int finalRes = mark1 / 4 + mark2 / 4 + mark3 / 2;
    return finalRes;
}

int main()
{
    int marks[4][10] = {
        { 80, 70, 92, 78, 58, 83, 85, 66, 99, 81 },
        { 75, 67, 55, 100, 91, 84, 79, 61, 90, 97 },
        { 98, 67, 75, 89, 81, 83, 80, 90, 88, 77 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
    };

    int col;

    for (col = 0; col < 10; col++)
    {
        marks[3][col] = finalResult(marks[0][col], marks[1][col], marks[2][col]);

        // printf("Roll No : %d.\tFull Number : %d\n", col + 1, marks[3][col]);
    }

    int row;

    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 10; col++)
        {
            if (row == 0 && col == 0)   printf("First terminal exam :\t");
            else if (row == 1 && col == 0)  printf("\nSecond terminal exam :\t");
            else if (row == 2 && col == 0)  printf("\nFinal exam :\t\t");
            else if (row == 3 && col == 0)  printf("\nTotal Marks :\t\t");

            printf("%d\t", marks[row][col]);
        }
    }
    printf("\n");
    return 0;
}