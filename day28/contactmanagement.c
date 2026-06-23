#include <stdio.h>

int main()
{
    int n, i, search, phone[100];
    char name[100][20];

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    // Input contacts
    for(i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Phone Number: ");
        scanf("%d", &phone[i]);
    }

    // Display contacts
    printf("\n----- CONTACT LIST -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nName : %s", name[i]);
        printf("\nPhone: %d\n", phone[i]);
    }

    // Search contact
    printf("\nEnter phone number to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(phone[i] == search)
        {
            printf("\nContact Found\n");
            printf("Name : %s\n", name[i]);
            printf("Phone: %d\n", phone[i]);
            break;
        }
    }

    if(i == n)
    {
        printf("Contact not found");
    }

    return 0;
}