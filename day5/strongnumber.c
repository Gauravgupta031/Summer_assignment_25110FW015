#include <stdio.h>
int main(){
    int i, n, sum = 0 , rem, temp ,fact ;

    printf("enter the number ");
    scanf("%d",&n);

    temp = n ;                           // sum of factorial of all digits

    while(n>0){
        rem = n % 10 ;                 // gets last digit
    fact = 1;
    
    for(int i = 1;i<= rem ; i++){         // n changes but temp remains same
     fact = fact * i ;
    }
    sum = sum + fact ;
    n /= 10 ;                         // removes last digit
}
if(sum == temp){
printf("strong number ");
}
else{
    printf("not strong number");

}
return 0;
}
