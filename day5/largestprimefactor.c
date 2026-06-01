#include<stdio.h>
int main(){
    int i,n , max = 0 ;

    printf("enter the number ");                 // 1 is a factor of all number so i = 2
    scanf("%d",&n);

    for(int i  = 2; i<=n ; i++){                // check all factors of number

            while(n%i == 0){                 
             max = i;                         // stores factor
             n = n / i ;                     // removes factor
            }
    }
        printf("largest prime factor is %d ", max);
    return 0;
}