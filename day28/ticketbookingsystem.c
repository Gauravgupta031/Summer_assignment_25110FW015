#include <stdio.h>

int main()
{
    int totalSeats = 50;
    int choice, tickets;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of tickets to book: ");
                scanf("%d", &tickets);

                if(tickets <= totalSeats)
                {
                    totalSeats = totalSeats - tickets;
                    printf("Booking Successful!\n");
                    printf("Remaining Seats = %d\n", totalSeats);
                }
                else
                {
                    printf("Sorry! Only %d seats available.\n", totalSeats);
                }
                break;

            case 2:
                printf("Available Seats = %d\n", totalSeats);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 3);

    return 0;
}