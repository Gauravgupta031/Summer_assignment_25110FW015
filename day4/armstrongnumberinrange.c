#include <stdio.h>
int main(){
    int temp ,n, rem , sum , start , end;

    printf("enter the start number :");
    scanf("%d",&start);
    printf("enter the end number :");
    scanf("%d",&end);
    
    printf("armstrong number ");

    for(int n = start ; n<=end ; n++){
    temp = n;
    sum = 0;
                                          // n contains original value for comparison later
    while (temp > 0)                        // we use temp in place of n in while loop  
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem ;
        temp /= 10 ;
    }
    
    if(sum == n)
    printf("%d ", n);
 }
    return 0;
}
