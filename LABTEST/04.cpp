#include "stdio.h"
#include "conio.h"

int price,code,dis,ship = 38,total;

main()
{
	printf ("====Welcome to ECSJA====\n");
	printf ("\n");
	printf ("Selling price (Baht) : ");
	scanf ("%d",&price);
	
	while(1)
	{
		printf ("Enter coupon code : ");
		scanf ("%d",&code);
		
		if (code == 0)
		{
			dis = 0;
			ship = 38;
			break;
		}
		
		else if (code == 1)
		{
			if (price >= 1000)
			{
				dis = price*0.05;
				ship = 38;
				if (dis > 60) dis = 60;
			}
			break;
		}
		
		else if (code == 2)
		{
			if (price >= 1500)
			{
				dis = price*0.10;
				ship = 0;
				if (dis > 200) dis = 200;
			}
			break;
		}
		
		else
		{
			printf ("The coupon code is wrong !! Please try again.\n");
		}
	}
	
	total = price - dis + ship;
	printf ("Discount (Baht) = %d\n",dis);
	printf ("Shipping cost (Baht) = %d\n",ship);
	printf ("Total price (Baht) = %d\n",total);
	printf ("\n");
	printf ("======Thank you======\n");
	
	getch();
}
