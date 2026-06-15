#include <stdio.h>
int main(){
    int i, n, totalsum = 0, arraysum = 0, arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");

    for(i = 1; i <= n; i++) {

        scanf("%d", &arr[i]);
        arraysum += arr[i];
    }

    totalsum = (n + 2) * (n + 1) / 2;

    printf("The missing number is: %d", totalsum - arraysum);

    return 0;
}