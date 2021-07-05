#include <stdio.h>

void insertion_sorting(int A[], int n);

int main()
{
    int A[] = {3, 5, 1, 6, 2};
    int n = 5;

    insertion_sorting(A, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    return 0;
}

void insertion_sorting(int A[], int n)
{
    int i, j, item; // 5 3 1 6 2
                    // 0 1 2 3 4
    for (i = 1; i < n; i++)
    {
        item = A[i]; // 4

        j = i - 1; // 0
        while (j >= 0 && A[j] > item)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = item;
    }
}
