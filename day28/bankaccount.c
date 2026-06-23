#include <stdio.h>

int main()
{
    int accNo, choice;
    char name[20];
    float balance = 0, amount;

    // Create account
    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    do
    {
        printf("\n===== BANK MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Account Number: %d\n", accNo);
                printf("Name: %s\n", name);
                printf("Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                balance = balance + amount;

                printf("Updated Balance = %.2f\n", balance);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= balance)
                {
                    balance = balance - amount;
                    printf("Updated Balance = %.2f\n", balance);
                }
                else
                {
                    printf("Insufficient Balance\n");
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