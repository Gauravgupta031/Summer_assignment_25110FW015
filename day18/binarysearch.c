#include <stdio.h>
int main(){
    int a[50], n, i, found = 0;
    int key, low =0, high = n -1 , mid;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            found = 1;
            break;
        }
        else if(key > a[mid])  low = mid + 1;
        
        else  high = mid - 1;
    }
        if(found == 1) {
            printf("Element found at position %d", mid + 1);
        }
        else {
            printf("Element not found");
        }
    return 0;
}