#include <stdio.h>
int main (){

    int n , rem, rev = 0;
    printf("enter the number");     // rem = last digit
    scanf("%d", &n);

    while(n > 0){

        rem = n % 10;             // rem = 123 % 10 --> 3 then 2 then 1
        rev = rev * 10 + rem;     // rev = 0 + 3 --> 3 then 3 * 10 + 2 = 32 then 32 * 10 + 1 = 321
        n = n / 10;               // n = 123 / 10 --> 12 then 1

        printf("reverse of number is  = %d ", rev );
    }
      return 0;
}