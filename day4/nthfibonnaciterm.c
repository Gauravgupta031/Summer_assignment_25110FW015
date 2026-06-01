#include <stdio.h>
int main(){
    int n , i, a = 0 , b = 1 , c ;

    printf("enter the number of terms ");
    scanf("%d",&n);
        
        if(n == 1)                // a = 0
        printf("%d",a);
        
        else if(n == 2)           // b = 1
        printf("%d",b);

        else {
        for(int i = 3 ; i<=n ; i++){
        
            c = a + b;                     // c = next term
            a = b;                         // a = previous term
            b = c;                         // b = current term
        }    
            printf("nth fibonnaci term = %d ", c);
    
}
    return 0;
}