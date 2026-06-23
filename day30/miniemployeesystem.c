#include <stdio.h>

int main()
{
    int id[100], n = 0, choice, i, search;
    char name[100][20];
    float basic[100], hra, da, gross;

    do
    {
        printf("\n===== EMPLOYEE MENU =====\n");
        printf("1. Add Employees\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Calculate Salary\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("How many employees do you want to add? ");
                scanf("%d", &n);

                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee %d\n", i + 1);

                    printf("Enter ID: ");
                    scanf("%d", &id[i]);

                    printf("Enter Name: ");
                    scanf("%s", name[i]);

                    printf("Enter Basic Salary: ");
                    scanf("%f", &basic[i]);
                }
                break;

            case 2:
                printf("\n----- EMPLOYEE RECORDS -----\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nID = %d\n", id[i]);
                    printf("Name = %s\n", name[i]);
                    printf("Basic Salary = %.2f\n", basic[i]);
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("\nEmployee Found\n");
                        printf("ID = %d\n", id[i]);
                        printf("Name = %s\n", name[i]);
                        printf("Basic Salary = %.2f\n", basic[i]);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Employee not found\n");
                }

                break;

            case 4:
                printf("\n----- SALARY DETAILS -----\n");

                for(i = 0; i < n; i++)
                {
                    hra = 0.20 * basic[i];
                    da = 0.10 * basic[i];

                    gross = basic[i] + hra + da;

                    printf("\nID = %d\n", id[i]);
                    printf("Name = %s\n", name[i]);
                    printf("Gross Salary = %.2f\n", gross);
                }

                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 5);

    return 0;
}