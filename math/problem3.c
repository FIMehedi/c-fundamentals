#include <stdio.h>

int main()
{
    double loan_amount, interest_rate, number_of_year, total_amount, monthly_amount;

    printf("Load Amount : ");
    scanf("%lf", &loan_amount);

    printf("Interste Rate : ");
    scanf("%lf", &interest_rate);

    printf("Number Of Year : ");
    scanf("%lf", &number_of_year);

    total_amount = (loan_amount + loan_amount * interest_rate * number_of_year) / 100;
    monthly_amount = total_amount / (number_of_year * 12);

    printf("Total Amount : %0.2lf\nMonthly Amount : %0.2lf\n", total_amount, monthly_amount);

    return 0;
}