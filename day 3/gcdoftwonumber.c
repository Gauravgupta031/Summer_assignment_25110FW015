#include <stdio.h>
int main(){
    int i, a, b, gcd ;

    printf("enter number ");
    scanf("%d%d",&a,&b);

    for(int i=1 ; i<=a && i<=b ; i++){
     
      if(a%i == 0 && b%i ==0){
       
        gcd = i ;
      }                                 // i is divided by both a and b
    }                                 // gcd = greatest value of i

    printf("gcd = %d ",gcd);

    return 0;
}