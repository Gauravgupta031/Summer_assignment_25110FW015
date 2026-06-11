#include <stdio.h>

// Function to calculate sum
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, result;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calling function and storing result
    result = sum(num1, num2);

    // Displaying result
    printf("Sum = %d", result);

    return 0;
}