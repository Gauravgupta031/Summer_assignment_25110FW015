#include<stdio.h>
int main(){

    int i , j;

    for(i = 2; i<= 5; i++){

        for(j=1 ; j<= 5-i ; j++)
            printf(" ");                       // number of spaces = 5 - i
      
            for(j=1 ; j<= i ; j++)
            printf("%c ", j+64);               // number of stars = 2*i - 1

        for(j=i-1 ; j>= 1; j--)
            printf("%c ", j+64);
        
            printf("\n ");
    }
return 0;
}