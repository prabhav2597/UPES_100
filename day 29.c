#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum = 0, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Sum of array elements */
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum of array elements = %d\n", sum);

    /* Maximum and Minimum */
    max = a[0];
    min = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}