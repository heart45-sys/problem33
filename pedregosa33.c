#include <stdio.h>

int main() {
    int room, nights;
    float rate, subtotal, discount, total;

    printf("1. Standard - P1200\n");
    printf("2. Deluxe - P2000\n");
    printf("3. Suite - P3500\n");

    printf("Enter room type: ");
    scanf("%d", &room);

    printf("Enter number of nights: ");
    scanf("%d", &nights);

    if (room == 1)
        rate = 1200;
    else if (room == 2)
        rate = 2000;
    else if (room == 3)
        rate = 3500;
    else {
        printf("Invalid room type!");
        return 0;
    }

    if (nights <= 0) {
        printf("Invalid number of nights!");
        return 0;
    }

    subtotal = rate * nights;
    discount = (nights >= 3) ? subtotal * 0.10 : 0;
    total = subtotal - discount;

    printf("\nRoom Type: %s\n",
        room == 1 ? "Standard" :
        room == 2 ? "Deluxe" : "Suite");
    printf("Subtotal: P%.2f\n", subtotal);
    printf("Discount: P%.2f\n", discount);
    printf("Total Cost: P%.2f\n", total);

    return 0;
}