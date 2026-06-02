#include<stdio.h>
int reverse = 0;
void rev(int n){

    if(n == 0){
        return ;
    }

    reverse = reverse * 10 + (n%10) ;

    rev(n / 10);
}                                        // remove last digit and call the remaining function with remaining digits

int main(){
    int n;

    printf("enter the number ");
    scanf("%d",&n);

    rev(n);

    printf("%d ", reverse);

    return 0;
}