#include <stdio.h>
int main (){

    int n , sum = 0 , rem;
    printf("enter the number");     // rem = last digit
    scanf("%d", &n);

    while(n > 0){

        rem = n % 10;             // rem = 123 % 10 --> 3 then 2 then 1
        sum = sum  + rem;         // sum = 0 + 3 --> 3 then 3 + 2 = 5 then 5 + 1 = 6
        n = n / 10;               // n = 123 / 10 --> 12 then 1

        printf("sum of digits = %d ", sum );
    }
      return 0;
}