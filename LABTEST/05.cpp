#include <stdio.h>

int main() {
    float price, discount = 0;
    int shipping = 38, gift = 0;

    printf("====Welcome to ECS Shop====\n");
    printf("Your order price (Baht): ");
    scanf("%f", &price);

    if (price >= 999) {
        shipping = 0;
        gift = 3;
        discount = price * 0.10;
    } else if (price >= 799) {
        shipping = 0;
        gift = 2;
    } else if (price >= 599) {
        shipping = 0;
        gift = 1;
    } else if (price >= 399) {
        shipping = 0;
    }

    printf("Shipping cost (Baht): %d\n", shipping);
    printf("Discount (Baht): %.0f\n", discount);
    printf("Total price (Baht): %.0f\n", price - discount + shipping);
    printf("Free gift (Item): %d\n", gift);
    printf("======Thank you======\n");
    return 0;
}
