// /*
// {6, 4, 7, 8, 9}
// {3, 7, 1, 9, 9}
// {8, 6, 4, 2, 7}
// {2, 4, 2, 5, 9}
// {4, 1, 6, 7, 3}
// */
// #include <stdio.h>

// int main()
// {
//     int numbers[5][5] = {
//         {6, 4, 7, 8, 9},
//         {3, 7, 1, 9, 9},
//         {8, 6, 4, 2, 7},
//         {2, 4, 2, 5, 9},
//         {4, 1, 6, 7, 3}
//     };

//     int row, col, rowSum;

//     for (row = 0; row < 5; row++)
//     {
//         rowSum = 0;
//         colSum = 0;
//         for (col = 0; col < 5; col++)
//         {
//             rowSum += numbers[row][col];
//             printf("%d %d\n", row, col);
//         }
//         printf("Sum of row %d : %d\n", row + 1, rowSum);
//     }

// }

/*
{6, 4, 7, 8, 9}
{3, 7, 1, 9, 9}
{8, 6, 4, 2, 7}
{2, 4, 2, 5, 9}
{4, 1, 6, 7, 3}
*/
#include <stdio.h>

int main()
{
    int numbers[5][5] = {
        {6, 4, 7, 8, 9},
        {3, 7, 1, 9, 9},
        {8, 6, 4, 2, 7},
        {2, 4, 2, 5, 9},
        {4, 1, 6, 7, 3}
    };

    int row, col, colSum;

    for (col = 0; col < 5; col++)
    {
        colSum = 0;
        for (row = 0; row < 5; row++)
        {
            colSum += numbers[row][col];
            // printf("%d %d\n", row, col);
        }
        printf("Sum of Col %d : %d\n", col + 1, colSum);
    }

}