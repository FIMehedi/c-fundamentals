#include <stdio.h>

int main() {
    int numbers[5][5] = {
        {6, 3, 8, 2, 4},
        {4, 7, 6, 4, 1},
        {7, 1, 4, 2, 6},
        {8, 9, 2, 5, 7},
        {9, 9, 7, 9, 3}
    };

    int numbers_copy[5][5];

    int row, col, cell1, cell2, extra;

    for (row = 0; row < 5; row++)
    {
        for (col = 0; col < 5; col++)
        {
            // cell1 = numbers[row][col];
            // cell2 = numbers[col][row];

            // numbers[row][col] = cell2;
            // numbers[col][row] = cell1;

            numbers_copy[row][col] = numbers[col][row];

            // printf("%d ", numbers[row][col]);
            printf("%d ", numbers_copy[row][col]);

            // printf("{%d %d}", row, col);
            // printf("{%d %d}", col, row);

        }
        printf("\n");
    }

    return 0;
}