#include<stdio.h>
int main(){
    int i , n ;

    printf("emter the number ");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i++){

        if(n % i == 0){                   // if n is divisible then it is a factor
            printf("%d " ,i);            
                                          // print that factor at divisibility
        }
    }
    return 0;
}