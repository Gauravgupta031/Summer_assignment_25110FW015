#include <stdio.h>
int main(){
    int i, n, arr[10], countEven = 0, countOdd = 0;
    printf("enter the number of elements in a array ");
    scanf("%d", &n);

    printf("enter the array elements ");
    for(i=0 ;i<=n ; i++){
        scanf("%d", &arr[i]);
        
        if(arr[i] % 2 == 0){
            countEven++;
        } else {
            countOdd++;
        }
    }
    printf("count of even numbers is %d ", countEven);
    printf("\n");
    printf("count of odd numbers is %d ", countOdd);
    return 0;
}