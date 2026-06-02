#include<stdio.h>
int sum(int n){

    if(n == 0){
        return 0 ;
    }
    return (n % 10) + sum(n/10) ;
}                                        // last digit + sum of remaining digits
int main(){
    int n;

    printf("enter the number ");
    scanf("%d",&n);

    printf("%d ", sum(n));
}