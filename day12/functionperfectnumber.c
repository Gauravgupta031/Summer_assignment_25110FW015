#include <stdio.h>

// Function to check perfect number
int perfect(int n)
{
    int i, sum = 0;

    // Find factors and add them
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        return 1;   // Perfect number
    else
        return 0;   // Not a perfect number
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(perfect(num))
        printf("%d is a Perfect Number", num);
    else
        printf("%d is Not a Perfect Number", num);

    return 0;
}