#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10];
    int rowSum[10];
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /* Find Sum of Each Row */

    for(i = 0; i < rows; i++)
    {
        rowSum[i] = 0;

        for(j = 0; j < cols; j++)
        {
            rowSum[i] = rowSum[i] + a[i][j];
        }
    }

    printf("\nSum of each row:\n");

    for(i = 0; i < rows; i++)
    {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    /* Find Transpose */

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of matrix:\n");

    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }

        printf("\n");
    }

    return 0;
}