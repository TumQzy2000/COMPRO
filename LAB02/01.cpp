#include "stdio.h"
#include "conio.h"

int num1,num2,num3,num4,num5,num6;
float avg;

main()
{
	printf ("Enter Num1 : ");
	scanf ("%d",&num1);
	printf ("Enter Num2 : ");
	scanf ("%d",&num2);
	printf ("Enter Num3 : ");
	scanf ("%d",&num3);
	printf ("Enter Num4 : ");
	scanf ("%d",&num4);
	printf ("Enter Num5 : ");
	scanf ("%d",&num5);
	printf ("Enter Num6 : ");
	scanf ("%d",&num6);
	
	avg = (num1 + num2 + num3 + num4 + num5 + num6)/6;
	
	printf ("Average results : %.4f",avg);
	getch();
}
