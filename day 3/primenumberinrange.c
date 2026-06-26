#include <stdio.h>
int main(){
    int i, j, start , end, prime;

    printf("enter the number ");
    scanf("%d%d",&start,&end);
    printf("prime numbers are \n");

    for(int n = start ; n<= end ; n++){
        prime = 0;
        if(n<2){          // 1 is not a prime number
        prime = 1;           // false 
        }

    for(int i = 2 ; i<= n/2 ; i++ ){     // n/2 for less time running
        if(n%i == 0){                    // i<= n is also correct but less efficient
            prime = 1;           // false
           break;                // composite number
    }
    }

    if(prime == 0){                // true
    printf("%d ",n);           // print prime number
    }
    }

    return 0;
}
