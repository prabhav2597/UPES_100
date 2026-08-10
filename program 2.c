
#include <stdio.h>

int main() 
{
    int num1, num2;
    int sum, diff, prod;
    float quot;

    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

 
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);

    // Checking for division by zero
    if (num2 != 0) {
        // Explicit type casting (int to float)
        quot = (float)num1 / num2;      
        printf("Quotient = %f\n", quot);
    } else {
        printf("Quotient = Division by zero is not allowed.\n");
    }

    return 0;
}