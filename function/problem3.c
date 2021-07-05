#include <stdio.h>

void bin_search(int array[], int item_num, int num);

int main()
{
    int numbers[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100, 200};
    int item_num = sizeof(numbers) / sizeof(numbers[0]);
    int num;

    printf("Target Number : ");
    scanf("%d", &num);

    bin_search(numbers, item_num, num);

    return 0;
}

void bin_search(int array[], int item_num, int num)
{
    int found_index;
    int low_index = 0;
    int high_index = item_num - 1;

    while (low_index <= high_index)
    {
        int mid_index = high_index - low_index / 2;

        if (num == array[mid_index])
        {
            printf("%d id position of %d.\n", num, mid_index + 1);
            break;
        }
        else if (num < array[mid_index])
        {
            high_index = mid_index - 1;
        }
        else
        {
            low_index = mid_index + 1;
        }
    }
}