#include <stdio.h>

int main() {
    float distance, fare;
    int age, category;

    // Input distance and age
    printf("Enter distance (in km): ");
    scanf("%f", &distance);
    printf("Enter age: ");
    scanf("%d", &age);

    // Determine category based on age
    if (age < 12)
        category = 1; // Child
    else if (age >= 12 && age < 60)
        category = 2; // Adult
    else
        category = 3; // Senior

    // Calculate fare using switch
    switch (category) {
        case 1:
            fare = (10 * distance) / 2;  // Half fare for children
            printf("Category: Child\n");
            break;
        case 2:
            fare = 10 * distance;        // Full fare for adults
            printf("Category: Adult\n");
            break;
        case 3:
            fare = (10 * distance) * 0.7; // 30% discount for seniors
            printf("Category: Senior Citizen\n");
            break;
        default:
            printf("Invalid category!\n");
            return 0;
    }

    // Display total fare
    printf("Total fare: ₹%.2f\n", fare);

    return 0;
}
