#include <stdio.h>
int main (){

    int n , prod = 1 , rem;
    printf("enter the number");     // rem = last digit
    scanf("%d", &n);

    while(n > 0){

        rem = n % 10;             // rem = 123 % 10 --> 3 then 2 then 1
        prod = prod * rem;         // product = 1 * 3 --> 3 then 3 * 2 = 6 then 6 * 1 = 6
        n = n / 10;               // n = 123 / 10 --> 12 then 1

        printf("product of digits = %d ", prod );
    }
      return 0;
}