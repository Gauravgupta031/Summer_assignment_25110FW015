#include <stdio.h>

// Function to check Armstrong number
int armstrong(int n)
{
    int temp, rem, sum = 0;

    temp = n;   // Store original number

    while(temp > 0)
    {
        rem = temp % 10;          // Get last digit
        sum = sum + (rem * rem * rem); // Cube of digit and add
        temp = temp / 10;         // Remove last digit
    }

    if(sum == n)
        return 1;   // Armstrong
    else
        return 0;   // Not Armstrong
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is Not an Armstrong Number", num);

    return 0;
}