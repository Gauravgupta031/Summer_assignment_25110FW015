#include <stdio.h>
int main(){
    int arr[100], n, i, k, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
      for(i = 0; i < n; i++) {
         if(arr[i] == 0) {                   

            for(k = i + 1; k < n; k++) {
                if(arr[k] != 0)
                {
                    temp = arr[i];
                    arr[i] = arr[k];             // Swap the zero with the next non-zero element
                    arr[k] = temp;
                    break;
                }
            }
        }
    }
    printf("Array after moving zeros to end:\n");

    for(i = 0; i < n; i++)   {
        printf("%d ", arr[i]);
    }
         return 0;
}