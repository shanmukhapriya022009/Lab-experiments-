#include <stdio.h>
#include <math.h>

int main()
{
    double n, root;

    printf("Enter a number: ");
    scanf("%lf", &n);

    if (n >= 0)
    {
        root = sqrt(n);
        printf("Square root = %.2lf\n", root);
    }
    else
    {
        printf("Square root of a negative number is not real.\n");
    }

    return 0;
}