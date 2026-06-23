#include <stdio.h>

int main()
{
    int a[100], n = 0;
    int choice, i, key, pos;

    do
    {
        printf("\n===== ARRAY MENU =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Delete Element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("How many elements do you want to insert? ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++)
                {
                    scanf("%d", &a[i]);
                }
                break;

            case 2:
                printf("Array elements are:\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &key);

                for(i = 0; i < n; i++)
                {
                    if(a[i] == key)
                    {
                        printf("Element found at position %d\n", i + 1);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Element not found\n");
                }

                break;

            case 4:
                printf("Enter position to delete (1 to %d): ", n);
                scanf("%d", &pos);

                if(pos >= 1 && pos <= n)
                {
                    for(i = pos - 1; i < n - 1; i++)
                    {
                        a[i] = a[i + 1];
                    }

                    n--;

                    printf("Element deleted successfully\n");
                }
                else
                {
                    printf("Invalid position\n");
                }

                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 5);

    return 0;
}