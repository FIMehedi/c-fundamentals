#include <stdio.h>

int main()
{
    char saarc[7][100] = {"Bangladesh", "India", "Nepal", "Bhutan", "Sri Lanka", "Pakistan", "Maldives"};

    int row = 0;
    for (row; row < 7; row++ )
    {
        printf("%s\n", saarc[row]);
    }

}