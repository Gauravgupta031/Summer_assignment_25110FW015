#include <stdio.h>
int main(){
    int i, n, arr[10];
    printf("enter the number of elements in a array ");
    scanf("%d", &n);

    printf("enter the array elements ");
    for(i=0 ;i<=n ; i++){
        scanf("%d", &arr[i]);
    }
    printf("array elements are ");
    for(i=0 ; i<=n ;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}