#include <stdio.h>
int main(){
    int i, j, start , end, prime;

    printf("enter the number ");
    scanf("%d%d",&start,&end);
    printf("prime numbers are \n");

    for(int i = start ; i<= end ; i++){
        prime = 1;
        if(i<2){          // 1 is not a prime number
        prime = 0;           // false 
        }

    for(int j = 2 ; j<= i/2 ; j++ ){     // i/2 for less time running
        if(i%j == 0){                    // j<= i is also correct but less efficient
            prime = 0;           // false
           break;                // composite number
    }
    }

    if(prime == 1){                // true
    printf("%d ",i);           // print prime number
    }
    }

    return 0;
}