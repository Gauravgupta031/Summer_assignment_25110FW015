#include <stdio.h>
int main(){
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        i++;
    }

    printf("Length of string = %d", i);

    return 0;
}
   // using strlrn() function

//    #include <stdio.h>
//    #include <string.h>

// int main()
// {
//     char str[100];

//     printf("Enter a string: ");
//     scanf("%s", str);

//     printf("Length of string = %d", strlen(str));

//     return 0;
// }