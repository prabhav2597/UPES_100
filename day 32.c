#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i;
    int num, digit;
    int count[10] = {0};
    int max, mostDigit;

    /* Merge Two Arrays */

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for(i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }

    /* Most Occurring Digit */

    printf("\n\nEnter an integer number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        num = -num;
    }

    if(num == 0)
    {
        count[0] = 1;
    }

    while(num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    max = count[0];
    mostDigit = 0;

    for(i = 1; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            mostDigit = i;
        }
    }

    printf("Most occurring digit = %d\n", mostDigit);
    printf("Number of occurrences = %d", max);

    return 0;
}