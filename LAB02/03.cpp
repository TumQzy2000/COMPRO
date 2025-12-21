#include "stdio.h"
#include "conio.h"

int B1000,B500,B100,B50,B20,Total;

main()
{
	printf("B1000 = "); scanf ("%d",&B1000);
	printf("B500 = "); scanf ("%d",&B500);
	printf("B100 = "); scanf ("%d",&B100);
	printf("B50 = "); scanf ("%d",&B50);
	printf("B20 = "); scanf ("%d",&B20);
	
	Total = (B1000*1000)+(B500*500)+(B100*100)+(B50*50)+(B20*20);
	
	printf ("Your Money = %d Baht",Total);
	getch();
}
