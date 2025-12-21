#include "stdio.h"
#include "conio.h"

int x;
float y;

main()
{
	printf ("Enter X : ");
	scanf ("%d",&x);
	
	y = (5.0/7.0)*x*x*x*x - (2.0/3.0)*x*x + (3.0/4.0)*x;
	
	printf ("Y Result : %.4f",y);
	getch();
}
