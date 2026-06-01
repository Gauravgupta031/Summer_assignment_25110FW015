#include <stdio.h>
int main(){
    int temp , n, rem , sum = 0 ;

    printf("enter the number");
    scanf("%d",&n);

    temp = n;        //  (sum of each digit)^n = armstrong number

    while (n>0)       // n = number of digits in a number
    {
        rem = n% 10;
        sum = sum + rem * rem * rem ;
        n = n/ 10 ;
    }
    
    if(sum == temp)
    printf(" armstrong number");

    else printf("not a armstrong number");

    return 0;
}