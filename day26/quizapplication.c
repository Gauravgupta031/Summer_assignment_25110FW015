#include <stdio.h>
#include <string.h>

int main()
{
    char answer[20];
    int score = 0;

    printf("Q3. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Mars\n3. Jupiter\n");

    printf("Enter your answer (option number or name): ");
    scanf("%s", answer);

    if(strcmp(answer, "2") == 0 ||
       strcmp(answer, "Mars") == 0 ||
       strcmp(answer, "mars") == 0 ||
       strcmp(answer, "MARS") == 0)
    {
        score++;
        printf("Correct!\n");
    }
    else
    {
        printf("Wrong!\n");
    }

    printf("Score = %d\n", score);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int answer, score = 0;

//     // Question 1
//     printf("Q1. What is the capital of India?\n");
//     printf("1. Mumbai\n2. Delhi\n3. Chennai\n");
//     printf("Enter your answer: ");
//     scanf("%d", &answer);

//     if(answer == 2)
//     {
//         score++;
//     }

//     // Question 2
//     printf("\nQ2. How many days are there in a week?\n");
//     printf("1. 5\n2. 6\n3. 7\n");
//     printf("Enter your answer: ");
//     scanf("%d", &answer);

//     if(answer == 3)
//     {
//         score++;
//     }

//     // Question 3
//     printf("\nQ3. Which planet is known as the Red Planet?\n");
//     printf("1. Venus\n2. Mars\n3. Jupiter\n");
//     printf("Enter your answer: ");
//     scanf("%d", &answer);

//     if(answer == 2)
//     {
//         score++;
//     }

//     printf("\nYour score = %d out of 3\n", score);

//     return 0;
// }