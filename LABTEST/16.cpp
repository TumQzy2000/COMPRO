#include "stdio.h"
#include "conio.h"

void printStar(int max_stars) 
{
	int i,j;
	for (i = 1; i <= max_stars; i++)
	{
		for (j = 0; j < i; j++) printf ("*");
		printf ("\n");
	}
	for (i = max_stars - 1; i >= 1; i--)
	{
		for (j = 0; j < i; j++) printf ("*");
		printf ("\n");
	}
}

main() 
{
	int n;
	while(1)
	{
		printf ("Enter N : ");
		scanf ("%d",&n);
		if (n > 0) break;
		printf ("Please try again.\n");
	}
	printStar(n);
	getch();
}
