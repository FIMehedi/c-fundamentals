#include <stdio.h>

int main()
{
    char country[] = {'B', 'A', 'N', 'g', 'L', 'A', 'D', 'E', 'S', 'H', '\0'};

    int item = sizeof(country) / sizeof(country[0]);

    printf("%s\n", country);

    for (int i = 0; i < item; i++)
    {
        if (country[i] >= 'A' && country[i] <= 'Z')
        {
            // printf("%c\n", country[i]);
            country[i] = 'a' + (country[i] - 'A');
        }

    }

    printf("%s\n", country);


    return 0;
}