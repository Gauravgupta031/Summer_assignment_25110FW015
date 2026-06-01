#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++) {
        
        printf("%d x %d = %d ", n , i , n * i);
    }
          // 5 * 1 = 5
          // 5 * 2 = 10
          // n * i = m

            // n constant and i++

    return 0;
}