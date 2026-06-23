#include <stdio.h>

int main()
{
    int n, i, search;
    int id[100];
    char name[100][20];
    float salary[100];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &id[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee records
    printf("\n----- Employee Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID = %d\n", id[i]);
        printf("Name = %s\n", name[i]);
        printf("Salary = %.2f\n", salary[i]);
    }

    // Search employee
    printf("\nEnter employee ID to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(id[i] == search)
        {
            printf("\nEmployee Found\n");
            printf("ID = %d\n", id[i]);
            printf("Name = %s\n", name[i]);
            printf("Salary = %.2f\n", salary[i]);
            break;
        }
    }

    if(i == n)
    {
        printf("Employee not found");
    }

    return 0;
}