#include<stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        n = n / 10;   // division removes one digit from end
        count++;      // count how many times division occurs
    }                // 123 --> 12 ( count = 1 )
                    // 12 --> 1 (count = 2)
                     // 1 --> 0 (count = 3)

    printf("number of digits = %d ", count);

    return 0;
}