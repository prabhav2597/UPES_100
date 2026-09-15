#include <stdio.h>

int main()
{
    int a[100], n, i, key, found = 0;
    int temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Linear Search */
    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }

    /* Reverse Array Without Extra Space */
    for(i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Reversed array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}