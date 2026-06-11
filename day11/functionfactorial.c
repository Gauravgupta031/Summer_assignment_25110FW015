#include <stdio.h>

// Function to calculate factorial
int factorial(int n)
{
    int i, fact = 1;

    // Multiply numbers from 1 to n
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num, result;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling function
    result = factorial(num);

    // Display result
    printf("Factorial = %d", result);

    return 0;
}