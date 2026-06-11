#include <stdio.h>

// Function to check prime number
int isPrime(int n)
{
    int i;

    // Numbers less than 2 are not prime
    if(n < 2)
        return 0;

    // Check divisibility from 2 to n-1
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;   // Not prime
    }

    return 1;   // Prime
}

int main()
{
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    if(isPrime(num))
        printf("%d is a Prime Number", num);
    else
        printf("%d is Not a Prime Number", num);

    return 0;
}