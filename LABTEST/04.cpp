#include <stdio.h>

int main() {
    float price, discount = 0, total;
    int code, shipping = 38;

    printf("====Welcome to ECSJA====\n");
    printf("Selling price (Baht): ");
    scanf("%f", &price);

    while(1) {
        printf("Enter coupon code: ");
        scanf("%d", &code);
        
        if (code == 0) {
            discount = 0;
            break;
        } else if (code == 1) {
            if (price >= 1000) {
                discount = price * 0.05;
                if (discount > 60) discount = 60;
            }
            break;
        } else if (code == 2) {
            if (price >= 1500) {
                discount = price * 0.10;
                if (discount > 200) discount = 200;
                shipping = 0;
            }
            break;
        } else {
            printf("The coupon code is wrong!! Please try again.\n");
        }
    }

    printf("Discount (Baht): %.0f\n", discount);
    printf("Shipping cost (Baht): %d\n", shipping);
    printf("Total price (Baht): %.0f\n", price - discount + shipping);
    printf("======Thank you======\n");
    return 0;
}
