#include <stdio.h>

int main()
{
    int i, j;

    /* Number Pattern */
    printf("Number Pattern:\n");

    for(i = 5; i >= 1; i--)
    {
        for(j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    /* Star Pattern */
    printf("Star Pattern:\n");

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf(" ");
        }

        for(j = i; j < 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}