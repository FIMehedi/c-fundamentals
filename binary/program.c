#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
    char binary[65];
    printf("Enter Binary Number : ");
    scanf("%s", &binary);

    int len;
    double power;
    int decimal = 0;
    len = strlen(binary);
    power = len - 1;

    for (int i = 0; i < len; i++) {
        decimal += (binary[i] - '0') * pow(2, power);
        power--;
    }

    printf("Bin %s = Dec %d\n", binary, decimal);


    return 0;
}