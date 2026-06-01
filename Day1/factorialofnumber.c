#include<stdio.h>

int main()
{
    int n, i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;  // fact increases and i++
    }                     // fact = 1 * 1 = 1
                          // fact = 1 * 2 = 2
                          // fact = 2 * 3 = 6

    printf("Factorial = %d ", fact);

    return 0;
}