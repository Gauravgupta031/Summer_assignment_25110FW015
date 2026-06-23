#include <stdio.h>
#include <string.h>

int main(){
    char word[10][20], temp[20];
    int n, i, j;

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter words:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", word[i]);
    }

    // Sorting
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strlen(word[i]) > strlen(word[j]) ||
              (strlen(word[i]) == strlen(word[j]) &&
               strcmp(word[i], word[j]) > 0))                // Sort by length, then alphabetically if lengths are equal
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    printf("\nSorted words:\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\n", word[i]);
    }

    return 0;
}