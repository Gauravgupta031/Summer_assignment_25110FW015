#include <stdio.h>
int main(){
    int arr[100], n, i, last;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
       // Store last element
    last = arr[n - 1];

    // Shift elements right
    for(i = n - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }
      // Put last element at first position
    arr[0] = last;

    printf("Array after right rotation:\n");

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}