#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int largest, second;
    int k, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Find Second Largest Element */

    largest = a[0];
    second = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest element = %d\n", second);

    /* Rotate Array to Right by k Positions */

    printf("\nEnter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    for(i = 1; i <= k; i++)
    {
        temp = a[n - 1];

        for(j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }

    printf("Array after right rotation:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}