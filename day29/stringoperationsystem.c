#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int choice, i, len, flag;

    printf("Enter a string: ");
    scanf("%s", str);

    do
    {
        printf("\n===== STRING MENU =====\n");
        printf("1. Length of String\n");
        printf("2. Reverse String\n");
        printf("3. Check Palindrome\n");
        printf("4. Convert to Uppercase\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                len = strlen(str);
                printf("Length = %d\n", len);
                break;

            case 2:
                len = strlen(str);

                for(i = 0; i < len; i++)
                {
                    rev[i] = str[len - 1 - i];
                }
                rev[i] = '\0';

                printf("Reversed String = %s\n", rev);
                break;

            case 3:
                len = strlen(str);
                flag = 1;

                for(i = 0; i < len / 2; i++)
                {
                    if(str[i] != str[len - 1 - i])
                    {
                        flag = 0;
                        break;
                    }
                }

                if(flag == 1)
                    printf("Palindrome String\n");
                else
                    printf("Not a Palindrome String\n");

                break;

            case 4:
                for(i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                    {
                        str[i] = str[i] - 32;
                    }
                }

                printf("Uppercase String = %s\n", str);
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