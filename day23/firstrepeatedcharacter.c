#include <stdio.h>
int main(){
    char str[100];
    int i, j, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++){
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j]){
                printf("First repeated character = %c", str[i]);
             count = 1;
                break;
            }
        }
            if (count == 1)
            break;
    }

    if (count == 0)
        printf("No repeated character");

    return 0;
}