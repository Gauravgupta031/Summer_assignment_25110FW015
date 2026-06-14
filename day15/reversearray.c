#include<stdio.h>
int main(){
    int n , i, j, temp , arr[100];
    printf("enter the size of array ");
    scanf("%d",&n);

    printf("enter the elements of array ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("the reversed array is: ");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }

    return 0;

}