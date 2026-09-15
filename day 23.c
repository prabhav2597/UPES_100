#include <stdio.h>

int main()
{
    int n, i, j;
    float sum = 0.0;

    /* Sum of series */
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + (float)(2 * i) / (4 * i - 1);
    }

    printf("Sum of the series = %.2f\n\n", sum);

    /* Star pattern */
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}