#include <stdio.h>
int main(){
   
    int n , prime = 0 ;
    printf("enter number ");
    scanf("%d", &n);

    for(int i=2 ; i< n ; i++){

    if(n % i == 0){
    prime = 1 ;           // 1 means factor found (TRUE)
    break;               // 0 means no factor (FALSE)
    }
}

if(n == 1){
printf("1 is not a prime number");}

else if(prime == 0){
printf("%d is a prime number",n);}

else{
printf("%d is not a prime number",n);}

return 0;
}