#include <stdio.h>

int main()
{
    int a, b, c, d, max, min;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = min = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;

    if (b < min)
        min = b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;

    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

    return 0;
}