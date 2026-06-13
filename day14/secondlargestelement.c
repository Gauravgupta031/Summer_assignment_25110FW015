#include <stdio.h>

int main()
{
    int arr[100], n, i, max, smax;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            smax = max;                 // arr[i] > max > smax both update max and smax
            max = arr[i];
        }
        else if(arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }
    printf("Second largest element is: %d", smax);

    return 0;
}