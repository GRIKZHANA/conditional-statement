#include <stdio.h>

int main() {
    int time;

    // Input time in 24-hour format
    printf("Enter the current time (0-23): ");
    scanf("%d", &time);

    // Check time range and print corresponding reminder
    if (time >= 6 && time <= 10)
        printf("Morning hydration\n");
    else if (time >= 11 && time <= 16)
        printf("Afternoon hydration\n");
    else if (time >= 17 && time <= 21)
        printf("Evening hydration\n");
    else
        printf("Time to rest\n");

    return 0;
}
