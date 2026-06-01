#include <stdio.h>
int main (){

    int n , rem, rev = 0, temp;
    printf("enter the number ");     // rem = last digit
    scanf("%d", &n);

    temp = n ;

    while(n > 0){

        rem = n % 10;             // rem = 121 % 10 --> 1 then 12 % 10 --> 2 then 1
        rev = rev * 10 + rem;     // rev = 0 + 1 --> 1 then 1 * 10 + 2 = 12 then 12 * 10 + 1 = 121
        n = n / 10;               // n = 121 / 10 --> 12 then 1
    }
      
    if(temp == rev)
    printf("palindrome number");        // temp = original number = 121 

    else
    printf("not a palindrome number");

      return 0;
}