 #include <stdio.h>
int main(){
    int a[10][10], rows, cols, i, j, sum;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &a[i][j]);
        }
    }                                // Find row-wise sum
    for(i = 0; i < rows; i++){
        sum = 0;                     // Reset sum for each row

        for(j = 0; j < cols; j++){
            sum = sum + a[i][j];
        }
    printf("Sum of row %d = %d\n", i + 1, sum);
}
 return 0;
}