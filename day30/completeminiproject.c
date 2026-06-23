#include <stdio.h>

int roll[100], n = 0;
char name[100][20];
float marks[100];

void addStudent()
{
    printf("Enter Roll Number: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Marks: ");
    scanf("%f", &marks[n]);

    n++;

    printf("Student Added Successfully\n");
}

void displayStudent()
{
    int i;

    printf("\n----- STUDENT RECORDS -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll Number = %d\n", roll[i]);
        printf("Name = %s\n", name[i]);
        printf("Marks = %.2f\n", marks[i]);
    }
}

void searchStudent()
{
    int i, search;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(roll[i] == search)
        {
            printf("\nStudent Found\n");
            printf("Roll Number = %d\n", roll[i]);
            printf("Name = %s\n", name[i]);
            printf("Marks = %.2f\n", marks[i]);
            return;
        }
    }

    printf("Student Not Found\n");
}

void updateStudent()
{
    int i, search;

    printf("Enter Roll Number to Update: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(roll[i] == search)
        {
            printf("Enter New Marks: ");
            scanf("%f", &marks[i]);

            printf("Record Updated Successfully\n");
            return;
        }
    }

    printf("Student Not Found\n");
}

void deleteStudent()
{
    int i, j, search;

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(roll[i] == search)
        {
            for(j = i; j < n - 1; j++)
            {
                roll[j] = roll[j + 1];
                marks[j] = marks[j + 1];
            }

            n--;

            printf("Record Deleted Successfully\n");
            return;
        }
    }

    printf("Student Not Found\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 6);

    return 0;
}