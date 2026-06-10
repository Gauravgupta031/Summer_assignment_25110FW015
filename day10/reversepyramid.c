#include<stdio.h>
int main(){

    int i , j;

    for(i = 5; i>= 1; i--){

        for(j=1 ; j<= 5-i ; j++)
            printf(" ");                       // number of spaces = 5 - i
      
            for(j=1 ; j<= 2*i-1 ; j++)
            printf("*");                     // number of stars = 2*i - 1

        printf("\n");
    }
return 0;

}