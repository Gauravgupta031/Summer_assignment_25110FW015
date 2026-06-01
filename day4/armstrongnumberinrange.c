#include <stdio.h>
int main(){
    int temp ,n, rem , sum , start , end;

    printf("enter the number");
    scanf("%d%d",&start,&end);
    printf("armstrong number ");

    for(int i = start ; i<=end ; i++){
    temp = i;
    sum = 0;
                                          // n contains original value for comparison later
    while (temp > 0)                        // we use temp in place of n in while loop  
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem ;
        temp /= 10 ;
    }
    
    if(sum == i)
    printf("%d ", i);
 }
    return 0;
}