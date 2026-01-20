#include "stdio.h"
#include "conio.h"

int min(int x,int y)
{
	if (x<=y)
		return x;
	else 
		return y;
}

int max(int x,int y)
{
	if (x>=y)
		return x;
	else
		return y;
}

main()
{
	int num1,num2;
	printf ("Enter Number 1 : ");
	scanf("%d",&num1);
	printf ("Enter Number 2 : ");
	scanf("%d",&num2);
	printf("Min = %d\n",min(num1,num2));
	printf("Max = %d\n",max(num1,num2));
	getch();
}
