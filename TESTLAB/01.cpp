#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

void Menu()
{
	printf ("***Menu***\n");
	printf ("Press 1 to create password.\n");
	printf ("Press 2 to exit.\n");
}

void CheckPassword()
{
	int pw;
	printf ("Create your password : ");
	scanf ("%d",&pw);
	
	if ((pw >= 1000) && (pw <= 9999))
	{
		printf ("Your password is already set.\n");
	}
	else
	{
		printf ("Your password is against the rule. Please try again.\n");
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
			CheckPassword();
			exit(0);
		}
		
		else if (choice == '2')
		{
			printf ("Thank you.\n");
			break;
		}
		
		else
		{
			printf ("Wrong choice. Please try again.");
		}
	getch();
	system ("cls");
	}
	getch();
}
