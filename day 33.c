#include <stdio.h>

int main()
{
    int a[100], n, i;
    int key, low, high, mid, found = 0;
    int element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Binary Search */

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }

    /* Insert Element in Sorted Array */

    printf("\nEnter element to insert: ");
    scanf("%d", &element);

    pos = n;

    for(i = 0; i < n; i++)
    {
        if(element < a[i])
        {
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = element;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}