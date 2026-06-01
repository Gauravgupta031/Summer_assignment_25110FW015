#include <stdio.h>
int main(){

    int a =0 , b=1 , c , i , n=10 ;

    printf("enter the number of terms ");
    scanf("%d ",&n);
    printf("fibonnaci series are ");

    for( int i = 1 ; i<=n ; i++){
       
        printf("%d ",a);
       
        c = a + b;            // learn first two terms of fibonnaci series
        a = b;                // a and b changes
        b = c;                // c and i increases
    }
    return 0;
}