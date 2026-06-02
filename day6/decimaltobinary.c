#include <stdio.h>
int main()
{
    int n, binary[20], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        binary[i] = n % 2;                  // Store remainder (0 or 1)
        n = n / 2;                     
        i++;                                // remove the last processed part
    }
     printf("Binary number = ");

    for(i = i - 1; i >= 0; i--)
    {
        printf("%d ", binary[i]);            // Print in reverse order
    }
    return 0;
}