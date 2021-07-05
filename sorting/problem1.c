    #include <stdio.h>

    void selection_sort(int A[], int n);

    int main()
    {
        int A[] = {8, 4, 2, 5, 1, 3, 7, 10, 9, 6};
        int n = 10;

        selection_sort(A, n);

        for (int i = 0; i < n; i++)
        {
            printf("%d ", A[i]);
        }
        printf("\n");

        return 0;
    }

    void selection_sort(int A[], int n)
    {
        int i, j, temp, min_index;

        for (i = 0; i < n - 1; i++)
        {
            min_index = i;
            for (j = i + 1; j < n; j++)
            {
                if (A[min_index] > A[j])
                {
                    min_index = j;
                }
            }
            if (min_index != i)
            {
                temp = A[i];
                A[i] = A[min_index];
                A[min_index] = temp;
            }
        }
    }