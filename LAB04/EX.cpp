#include "stdio.h"
#include "conio.h"

int n,x,y;

main()
{
	printf ("Enter n : ");
	scanf ("%d",&n);
	
	for (x=1; x<=n ;x++)
	{
		y = (3*x)+1;
	}
	printf("%d",y);
	getch();
}
