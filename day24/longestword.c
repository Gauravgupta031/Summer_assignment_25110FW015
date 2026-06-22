#include <stdio.h>
int main(){
    char str[100];
    int i, start = 0, maxStart = 0;
    int len = 0, maxLen = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            len++;
        }
        else
        {
            if(len > maxLen)
            {
                maxLen = len;
                maxStart = start;
            }

            len = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    printf("Longest word = ");

    for(i = maxStart; i < maxStart + maxLen; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}