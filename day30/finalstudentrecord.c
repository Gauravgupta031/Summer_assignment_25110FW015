#include <stdio.h>

int main()
{
    int roll[100], n = 0, choice, i, search;
    char name[100][20];
    float marks[100];

    do
    {
        printf("\n===== STUDENT MENU =====\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("How many students do you want to add? ");
                scanf("%d", &n);

                for(i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);

                    printf("Enter Roll Number: ");
                    scanf("%d", &roll[i]);

                    printf("Enter Name: ");
                    scanf("%s", name[i]);

                    printf("Enter Marks: ");
                    scanf("%f", &marks[i]);
                }

                break;

            case 2:
                printf("\n----- STUDENT RECORDS -----\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Roll Number = %d\n", roll[i]);
                    printf("Name = %s\n", name[i]);
                    printf("Marks = %.2f\n", marks[i]);
                }

                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(roll[i] == search)
                    {
                        printf("\nStudent Found\n");
                        printf("Roll Number = %d\n", roll[i]);
                        printf("Name = %s\n", name[i]);
                        printf("Marks = %.2f\n", marks[i]);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Student not found\n");
                }

                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}