#include <stdio.h>
int main(){
    int i, n, arr[10],max, min;
    
    printf("enter the number of elements in a array ");
    scanf("%d", &n);

    printf("enter the array elements ");
    for(i=0 ;i<=n ; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("largest element is %d ", max);
    printf("\n");
    printf("smallest element is %d ", min);
    return 0;
}