#include <stdio.h>
int main(){
    int a ,b , max ;

    printf("enter two number ");
    scanf("%d%d",&a,&b);

    max = (a > b ) ? a : b ;          // condition ? if true : else false

    while(1){
    if(max % a ==0 && max % b == 0){
        printf("lcm = %d ",max);
        break;                       // max is divisible by both a and b
    }

    max++;
    }
    return 0;
}