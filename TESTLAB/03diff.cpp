#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

void Menu()
{
	printf ("***Menu***\n");
	printf ("Press 1 to check a prime number.\n");
	printf ("Press 2 to exit.\n");
}

void PrimeNumber()
{
	int n,i,prime = 0;
	printf ("Enter your number: ");
	scanf ("%d",&n);
	
	if (n == 0 || n == 1) prime = 1;
	{
		for (i=n;i<=n/2;i++)
		{
			if (n%i == 0)
			{
				prime = 1;
				break;
			}
		}
	}
	
	if (prime == 0)
	{
		printf ("%d is a prime number.\n",n);
	}
	else
	{
		printf ("%d is not a prime number.\n",n);	
	}

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
			PrimeNumber();
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
