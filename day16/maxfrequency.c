#include <stdio.h>
int main(){
    int arr[100], n;
    int i, j, count;
    int maxfreq = 0, element;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
         for(i = 0; i < n; i++) {
         count = 0;

        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]){
                count++;
            }
        }
          if(count > maxfreq)  {
            maxfreq = count;
            element = arr[i];
        }
    }
     printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d", maxfreq);

    return 0;
}