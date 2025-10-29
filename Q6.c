#include <stdio.h>

int main() {
    int x, y;

    
    printf("Enter x coordinate: ");
    scanf("%d", &x);
    printf("Enter y coordinate: ");
    scanf("%d", &y);

    
    if (x > 0 && y > 0)
        printf("The coordinate point (%d,%d) lies in the First Quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The coordinate point (%d,%d) lies in the Second Quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The coordinate point (%d,%d) lies in the Third Quadrant.\n", x, y);
    else if (x > 0 && y < 0)
        printf("The coordinate point (%d,%d) lies in the Fourth Quadrant.\n", x, y);
    else
        printf("The coordinate point (%d,%d) lies on an Axis.\n", x, y);

    return 0;
}
