#include <stdio.h>

// Function to check palindrome
int palindrome(int n)
{
    int temp, rem, rev = 0;

    temp = n;   // Store original number

    while(temp > 0)
    {
        rem = temp % 10;          // Get last digit
        rev = rev * 10 + rem;     // Reverse the number
        temp = temp / 10;         // Remove last digit
    }

    if(rev == n)
        return 1;   // Palindrome
    else
        return 0;   // Not palindrome
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(palindrome(num))
        printf("%d is a Palindrome Number", num);
    else
        printf("%d is Not a Palindrome Number", num);

    return 0;
}