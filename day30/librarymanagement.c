#include <stdio.h>

int main()
{
    int id[100], status[100];
    char title[100][20];
    int n = 0, choice, i, search;

    do
    {
        printf("\n===== LIBRARY MENU =====\n");
        printf("1. Add Books\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("How many books do you want to add? ");
                scanf("%d", &n);

                for(i = 0; i < n; i++)
                {
                    printf("\nBook %d\n", i + 1);

                    printf("Enter Book ID: ");
                    scanf("%d", &id[i]);

                    printf("Enter Title: ");
                    scanf("%s", title[i]);

                    status[i] = 0;     // 0 means available
                }
                break;

            case 2:
                printf("\n----- BOOK LIST -----\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nBook ID = %d\n", id[i]);
                    printf("Title = %s\n", title[i]);

                    if(status[i] == 0)
                        printf("Status = Available\n");
                    else
                        printf("Status = Issued\n");
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("\nBook Found\n");
                        printf("Book ID = %d\n", id[i]);
                        printf("Title = %s\n", title[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Book not found\n");

                break;

            case 4:
                printf("Enter Book ID to issue: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        if(status[i] == 0)
                        {
                            status[i] = 1;
                            printf("Book Issued Successfully\n");
                        }
                        else
                        {
                            printf("Book is already issued\n");
                        }

                        break;
                    }
                }

                break;

            case 5:
                printf("Enter Book ID to return: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        status[i] = 0;
                        printf("Book Returned Successfully\n");
                        break;
                    }
                }

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