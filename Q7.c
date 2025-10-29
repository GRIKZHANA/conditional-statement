#include <stdio.h>

int main() {
    char ch;

    // Input a single character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check the category of the character
    if (ch >= '0' && ch <= '9')
        printf("This is a number\n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase letter\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase letter\n");
    else
        printf("Special character\n");

    return 0;
}
