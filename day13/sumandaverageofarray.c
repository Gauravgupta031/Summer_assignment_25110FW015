#include <stdio.h>
int main(){
    int i, n, arr[10], sum =0;
    float avg ;

    printf("enter the number of elements in a array ");
    scanf("%d", &n);

    printf("enter the array elements ");
    for(i=0 ; i<=n ; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
        avg = (float)sum/n;
    }
        printf("sum is %d ", sum);
        printf("\n");
        printf("average is %f ", avg);

    return 0;
}