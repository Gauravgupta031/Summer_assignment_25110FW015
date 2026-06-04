#include<stdio.h>
int main(){
    int i, j ,a =5 ;                               // i + j = n + 1

    for(i = 1 ; i <=5 ; i++){                     // method 2
        for(j =1 ;j <= a ; j++){                 // j = n + 1 -i
            printf("%d ",j);
        }
        printf("\n");
        a--;
    }
     return 0;
}