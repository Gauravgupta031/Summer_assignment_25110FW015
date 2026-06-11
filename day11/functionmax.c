#include <stdio.h>

// Function to find maximum number
int maximum(int a, int b)
{
    if(a > b)
        return a;   // return a if a is greater
    else
        return b;   // otherwise return b
}

int main()
{
    int num1, num2, max;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calling function
    max = maximum(num1, num2);

    // Display result
    printf("Maximum number = %d", max);

    return 0;
}