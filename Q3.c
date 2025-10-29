#include <stdio.h>

int main() {
    int page;

    // Input a page number
    printf("Enter the page number: ");
    scanf("%d", &page);

    // Check if the page is even or odd
    if (page % 2 == 0)
        printf("Left Page\n");
    else
        printf("Right Page\n");

    return 0;
}
