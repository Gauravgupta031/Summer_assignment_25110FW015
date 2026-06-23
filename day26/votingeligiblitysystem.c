#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char age[20];

//     printf("Enter your age: ");
//     scanf("%s", age);

//     if(strcmp(age, "18") == 0 ||
//        strcmp(age, "19") == 0 ||
//        strcmp(age, "20") == 0 ||
//        strcmp(age, "eighteen") == 0 ||
//        strcmp(age, "nineteen") == 0 ||
//        strcmp(age, "twenty") == 0)
//     {
//         printf("You are eligible to vote.\n");
//     }
//     else
//     {
//         printf("You are not eligible to vote.\n");
//     }

//     return 0;
// }