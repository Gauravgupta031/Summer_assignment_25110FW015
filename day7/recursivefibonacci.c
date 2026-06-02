#include<stdio.h>
int fibo(int n){

if(n == 0){
return 0;
}                                           // a=0 and b =1 and c = a + b
if(n == 1){
return 1;
}

    return fibo(n - 1) + fibo(n - 2);
}
int main(){
    int n ;

    printf("enter the number ");
    scanf("%d",&n);

    printf("%d ", fibo(n));

    return 0;

}