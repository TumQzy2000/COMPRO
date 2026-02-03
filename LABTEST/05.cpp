#include "stdio.h"
#include "conio.h"

int price,ship = 38,dis,total,gift;

main()
{
	printf ("====Welcome to ECS Shop====\n");
	printf ("\n");
	printf ("Your order price(Baht) : ");
	scanf ("%d",&price);
	
	if (price >= 399)
	{
		ship = 0;
		dis = 0;
	}
	
	else if (price >= 599)
	{
		ship = 0;
		dis = 0;
		gift = 1;
	}
	
	else if (price >= 799)
	{
		ship = 0;
		dis = 0;
		gift = 2;
	}
	
	else if (price >= 999)
	{
		ship = 0;
		dis = price * 0.10;
		gift = 3;
	}
	
	total = price - dis +ship;
	printf ("Shipping cost (Baht) : %d\n",ship);
	printf ("Discount (Baht) : %d\n",dis);
	printf ("Total price (Baht) : %d\n",total);
	printf ("Free gift (Baht) : %d\n",gift);
	printf ("\n");
	printf ("======Thank you======\n");
	
	getch();
}
