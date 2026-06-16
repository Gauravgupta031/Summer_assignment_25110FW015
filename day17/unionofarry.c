#include <stdio.h>
int main(){
    int a[50], b[50];
    int n1, n2;
    int i, j, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++){
        scanf("%d", &b[i]);
    }
    printf("Union Array: ");

    // Print first array
    for(i = 0; i < n1; i++) {
        printf("%d ", a[i]);
    }
       // Print only non-repeated elements of second array
    for(i = 0; i < n2; i++){
        found = 0;

        for(j = 0; j < n1; j++) {
            if(b[i] == a[j])  {
                found = 1;
                break;
            }
        }
            if(found == 0) {
            printf("%d ", b[i]);
        }
    }
      return 0;
}