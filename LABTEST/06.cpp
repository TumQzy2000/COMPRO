#include "stdio.h"
#include "conio.h"

int down_pact,month;
char model;
float price,rate,down_pay,remain,interest,total,month_pay;

main()
{
	printf ("Enter car model(A/B) : ");
	scanf ("%c",&model);
	
	if (model == 'A' || model == 'a')
	{
		price = 1690000;
	}
	
	else 
	{
		price = 1710000;
	}
	
	printf ("Enter down payment (15%%/20%%) : ");
	scanf ("%d",&down_pact);
	printf ("Enter payment plan (48/60) : ");
	scanf ("%d",&month);
	
	if (down_pact == 15)
	{
		if (month == 48)
		{
			rate = 2.4;
		}
		else
		{
			rate = 2.65;
		}
	}
	
	if (down_pact == 20)
	{
		if (month == 48)
		{
			rate = 2.05;
		}
		else
		{
			rate = 2.2;
		}
	}
	
	down_pay = price * (down_pact/100.0);
	remain = price - down_pay;
	interest = remain * (rate/100.0);
	total = interest * (month/12.0);
	month_pay = (remain + total) / month;
	
	printf ("-------------------Summary-------------------\n");
	printf ("Model %c price = %.0f Baht\n",model,price);
	printf ("Down payment = %.0f Baht\n",down_pay);
	printf ("Annual interest rate = %.2f% %%\n",rate);
	printf ("Annual Interest = %.0f Baht\n",interest);
	printf ("Total Interest = %.0f Baht\n",total);
	printf ("Monthly payment = %.0f Baht\n",month_pay);
	
	getch();
}
