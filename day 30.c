#include <stdio.h>

int main()
{
    int a[100], n, i;
    int even = 0, odd = 0;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Count Even and Odd Numbers */
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    /* Count Positive, Negative and Zero */
    for(i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            positive++;
        }
        else if(a[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("\nEven numbers = %d", even);
    printf("\nOdd numbers = %d", odd);

    printf("\nPositive numbers = %d", positive);
    printf("\nNegative numbers = %d", negative);
    printf("\nZero elements = %d", zero);

    return 0;
}