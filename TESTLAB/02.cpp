#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

void Menu()
{
	printf ("***Menu***\n");
	printf ("Press 1 to show Fibonacci Sequence.\n");
	printf ("Press 2 t exit.\n");
}

void Fibonacci()
{
	int n,i;
	int x1 = 0, x2 = 1, Fi;
	printf ("Enter N : ");
	scanf ("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf ("%d ",x1);
		Fi = x1+ x2;
		x1 = x2;
		x2 =Fi;
	}
	printf ("\n");
}

main()
{
	char choice;
	while(1)
	{
		Menu();
		choice = getch();
		printf ("%c\n",choice);
		
		if (choice == '1')
		{
			Fibonacci();
			exit(0);
		}
		
		else if (choice == '2')
		{
			printf ("Thank you.\n");
			break;
		}
		
		else 
		{
			printf ("Wrong choice. Please try again.\n");
		}
	getch();
	system ("cls");
	}
	getch();
}
