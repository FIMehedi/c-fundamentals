#include <stdio.h>

void bubble_sorting(int A[], int n);

int main()
{
    int A[] = {8, 4, 2, 5, 1, 3, 54, 7, 10, 9};
    int n = 10;

    bubble_sorting(A, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

void bubble_sorting(int A[], int n)
{
    int i, j, temp;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}