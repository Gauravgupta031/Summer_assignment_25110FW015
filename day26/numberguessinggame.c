#include <stdio.h>

int main()
{
    int secret = 7;   // Secret number
    int guess;

    printf("Guess a number between 1 and 10\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess < secret)
        {
            printf("Too low!\n");
        }
        else if(guess > secret)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Congratulations! You guessed it.\n");
        }

    } while(guess != secret);

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char guess[20];

//     printf("Guess the secret number (between 1 and 10): ");
//     scanf("%s", guess);

//     if(strcmp(guess, "7") == 0 ||
//        strcmp(guess, "seven") == 0 ||
//        strcmp(guess, "Seven") == 0)
//     {
//         printf("Correct! You guessed it.\n");
//     }
//     else
//     {
//         printf("Wrong guess!\n");
//     }

//     return 0;
// }