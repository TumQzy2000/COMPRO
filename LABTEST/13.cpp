#include "stdio.h"
#include "conio.h"

float Req(char option, int R1, int R2, int R3) 
{
	if (option == 's')
	{
		return (float)(R1+R2+R3);
	}
	else if (option == 'p')
	{
		return 1.0/((1.0/R1)+(1.0/R2)+(1.0/R3));
	}
}

main() 
{
	char opt;
	int r1,r2,r3;
	
	printf ("Enter Option (s or p) : ");
	scanf ("%c",&opt);
	
	printf ("Enter R1 : "); scanf ("%d",&r1);
	printf ("Enter R2 : "); scanf ("%d",&r2);
	printf ("Enter R3 : "); scanf ("%d",&r3);
	
	printf ("Req = %.2f Ohm",Req(opt,r1,r2,r3));
	getch();
}
