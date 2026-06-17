#include <stdio.h>
int main(){
    int a[10][10], b[10][10], c[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &b[i][j]);
        }
    }
     printf("Transpose of first matrix:\n");
    for(i = 0; i < cols; i++){
        for(j = 0; j < rows; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    printf("Transpose of second matrix:\n");
    for(i = 0; i < cols; i++){
        for(j = 0; j < rows; j++) {
            printf("%d ", b[j][i]);
        }
        printf("\n");
    }
     return 0;
}