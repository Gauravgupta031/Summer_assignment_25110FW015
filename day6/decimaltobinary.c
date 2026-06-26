#include <stdio.h>
int main()
{
    int n, binary[20], i = 0,j ;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        binary[i] = n % 2;                  // Store remainder (0 or 1)
        n = n / 2;                     
        i++;                                // remove the last processed part
    }
     printf("Binary number = ");

    for(j = i - 1; j >= 0; j--)
    {
        printf("%d ", binary[j]);            // Print in reverse order
    }
    return 0;
}
