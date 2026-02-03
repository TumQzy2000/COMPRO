#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

void Menu() {
    printf("***Menu***\n");
    printf("Press 1 to create an isosceles triangle.\n");
    printf("Press 2 to exit.\n");
}

void DrawTriangle() 
{
	int n,i,j;
	printf ("Enter N : ");
	scanf ("%d",&n);
	
	while(n <= 1)
	{
		printf ("Please try agian.\n");
		printf ("Enter height : ");
		scanf ("%d",&n);
	}
	
	for (i = n;i >= 1;i--)
	{
		for (j = 1;j <= n-i;j++)
		{
			printf (" ");
		}
		for (j = 1;j <= 2*i-1;j++)
		{
			printf ("#");
		}
		printf ("\n");
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
			DrawTriangle();
			break;
		}
		
		else if (choice == '2')
		{
			printf ("Thank you.");
			break;
		}
		
		else 
		{
			printf ("Wrong choice.Please try again.\n");
		}
		getch();
		system ("cls");
	}
	getch();
}
