#include <stdio.h>
int main(){
    int n , sum = 0 , i ;

    printf("enter the number ");
    scanf("%d",&n);
    
    for(int i = 1 ; i < n ; i++){
        if(n%i == 0){                    // sum of n natural number
            sum = sum + i ;
        }                            // addition of all factors except itself
    }
    if(sum == n){                   
      printf("perfect number");
    }

        else{ 
        printf(" not a perfect number");
    }
    return 0;
}