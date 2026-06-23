#include <stdio.h>

int main()
{
    int id[100], quantity[100];
    float price[100];
    char name[100][20];
    int n = 0, choice, i, search;

    do
    {
        printf("\n===== INVENTORY MENU =====\n");
        printf("1. Add Products\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("How many products do you want to add? ");
                scanf("%d", &n);

                for(i = 0; i < n; i++)
                {
                    printf("\nProduct %d\n", i + 1);

                    printf("Enter Product ID: ");
                    scanf("%d", &id[i]);

                    printf("Enter Product Name: ");
                    scanf("%s", name[i]);

                    printf("Enter Quantity: ");
                    scanf("%d", &quantity[i]);

                    printf("Enter Price: ");
                    scanf("%f", &price[i]);
                }
                break;

            case 2:
                printf("\n----- PRODUCT DETAILS -----\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nProduct %d\n", i + 1);
                    printf("ID       = %d\n", id[i]);
                    printf("Name     = %s\n", name[i]);
                    printf("Quantity = %d\n", quantity[i]);
                    printf("Price    = %.2f\n", price[i]);
                }
                break;

            case 3:
                printf("Enter Product ID to search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("\nProduct Found\n");
                        printf("ID       = %d\n", id[i]);
                        printf("Name     = %s\n", name[i]);
                        printf("Quantity = %d\n", quantity[i]);
                        printf("Price    = %.2f\n", price[i]);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Product not found\n");
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