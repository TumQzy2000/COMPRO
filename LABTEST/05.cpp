#include "stdio.h"
#include "conio.h"

int price, dis = 0;
int ship = 38, gift = 0,total;
    
main() 
{
    printf("====Welcome to ECS Shop====\n");
    printf("Your order price (Baht): ");
    scanf("%d", &price);

    if (price >= 999) {
        ship = 0;
        gift = 3;
        dis = price * 0.10;
    } else if (price >= 799) {
        ship = 0;
        gift = 2;
    } else if (price >= 599) {
        ship = 0;
        gift = 1;
    } else if (price >= 399) {
        ship = 0;
    }

	total = price - dis + ship;
	
    printf("Shipping cost (Baht): %d\n", ship);
    printf("Discount (Baht): %d\n", dis);
    printf("Total price (Baht): %d\n", total);
    printf("Free gift (Item): %d\n", gift);
    printf("======Thank you======\n");
    
    getch();
}
