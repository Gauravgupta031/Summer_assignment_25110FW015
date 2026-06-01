#include <stdio.h>

int main() {
    int n, sum = 0 ;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1 ; i<= n ; i++){            // sum increases and i++

      //   sum = 0 + 1 = 1
      //   sum = 1 + 2 = 3
      //   sum = 3 + 3 = 6
    sum = sum + i ;
    }

    printf("Sum of n natural numbers = %d ", sum);

    return 0;
}