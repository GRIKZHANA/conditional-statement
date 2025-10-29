#include <stdio.h>

int main() {
    int amount;
    int range;

   
    printf("Enter total purchase amount: ");
    scanf("%d", &amount);

   
    range = amount / 1000;

    
    switch (range) {
        case 0:
        case 1:
        case 2:
            printf("No discount\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("10%% discount\n");
            break;
        default:
            printf("20%% discount\n");
            break;
    }

    return 0;
}
