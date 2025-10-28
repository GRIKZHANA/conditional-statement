#include <stdio.h>

int main() {
    int temperature;

    printf("Enter the coffee temperature (°C): ");
    scanf("%d", &temperature);

    if (temperature > 85) {
        printf("Too hot to drink!\n");
    } 
    else if (temperature >= 60 && temperature <= 85) {
        printf("Perfect to drink!\n");
    } 
    else {
        printf("Needs reheating!\n");
    }

    return 0;
}
