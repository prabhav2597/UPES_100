#include <stdio.h>

int main()
{
    int a[100], n, i;
    int element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /* Insert Element at Given Position */

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = element;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    /* Delete Element from Array */

    printf("\n\nEnter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    printf("Array after deletion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}