#include <stdio.h>

int main() {
    float distance, fare;
    int age, category;

    // Input distance and age
    printf("Enter distance (in km): ");
    scanf("%f", &distance);
    printf("Enter age: ");
    scanf("%d", &age);

    // Base fare = ₹10 per km
    fare = distance * 10;

    // Map age into categories
    if (age < 12)
        category = 1;  // Child
    else if (age >= 12 && age < 60)
        category = 2;  // Adult
    else
        category = 3;  // Senior

    // Calculate fare based on category using switch
    switch (category) {
        case 1:
            fare = fare / 2;  // 50% discount
            printf("Child fare: %.2f\n", fare);
            break;

        case 2:
            printf("Adult fare: %.2f\n", fare);
            break;

        case 3:
            fare = fare * 0.7;  // 30% discount
            printf("Senior citizen fare: %.2f\n", fare);
            break;

        default:
            printf("Invalid category\n");
    }

    return 0;
}
