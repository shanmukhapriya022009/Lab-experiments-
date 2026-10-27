#include <stdio.h>

int main()
{
    int A, B, C, D, E, F, G;
    int i, J;
    double result1, result2;

    printf("Enter A, B, C, D, E, F, G: ");
    scanf("%d %d %d %d %d %d %d",
          &A, &B, &C, &D, &E, &F, &G);

    result1 = A + B * C + D * E + F * G;

    printf("a. Result = %.2f\n", result1);

    if (B != 0)
    {
        result2 = (double)A / B * C - B + (double)A * D / 3;
        printf("b. Result = %.2f\n", result2);
    }
    else
    {
        printf("b. Division by zero is not possible.\n");
    }

    {
        int x = A;
        int y = B;
        int result3 = x++ + y-- - x;

        printf("c. Result = %d\n", result3);
    }

    printf("d. J=(i++)+(++i) has undefined behavior in C.\n");

    return 0;
}