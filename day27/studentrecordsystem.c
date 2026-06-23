#include <stdio.h>
int main(){
    int n, i, search;
    int roll[100];
    char name[100][20];
    float marks[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\nEnter roll number to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)    {
        if(roll[i] == search)
        {
            printf("\nStudent Found\n");
            printf("Roll Number = %d\n", roll[i]);
            printf("Name = %s\n", name[i]);
            printf("Marks = %.2f\n", marks[i]);
            break;
        }
    }
       if(i == n){
        printf("Student not found");
    }
      return 0;
}