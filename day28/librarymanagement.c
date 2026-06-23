#include <stdio.h>

int main()
{
    int n, i, search, id[100];
    char title[100][30], author[100][30];

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &id[i]);

        printf("Enter Title: ");
        scanf("%s", title[i]);

        printf("Enter Author: ");
        scanf("%s", author[i]);
    }

    // Display books
    printf("\n----- LIBRARY BOOKS -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", id[i]);
        printf("Title   : %s\n", title[i]);
        printf("Author  : %s\n", author[i]);
    }

    // Search book
    printf("\nEnter Book ID to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(id[i] == search)
        {
            printf("\nBook Found\n");
            printf("Book ID : %d\n", id[i]);
            printf("Title   : %s\n", title[i]);
            printf("Author  : %s\n", author[i]);
            break;
        }
    }

    if(i == n)
    {
        printf("Book not found");
    }

    return 0;
}