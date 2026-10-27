#include <stdio.h>
#include <math.h>

int main()
{
    double principal, rate, time, amount, interest;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual rate of interest: ");
    scanf("%lf", &rate);

    printf("Enter time in years: ");
    scanf("%lf", &time);

    amount = principal * pow(1 + rate / 100.0, time);
    interest = amount - principal;

    printf("Total Amount = %.2lf\n", amount);
    printf("Compound Interest = %.2lf\n", interest);

    return 0;
}