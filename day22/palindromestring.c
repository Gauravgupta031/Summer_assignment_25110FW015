#include <stdio.h>

int main() {
    char str[100];
    int len = 0, i;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length manually
    while (str[len] != '\0') {
        len++;
    }                            // Alternatively, you could use len = strlen(str) from <string.h>

    // Check palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}