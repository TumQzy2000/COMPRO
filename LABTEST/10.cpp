#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

void Menu()
{
	printf ("***Menu***\n");
	printf ("Press 1 to calculate interest.\n");
	printf ("Press 2 to exit.\n");
}

void SummaryInterest()
{
	float principal,profit = 0,sum_profit = 0,rate;
	int month = 0;
	
	printf ("Enter your principal (Baht) : ");
	scanf ("%f",&principal);
	printf ("Enter monthly profit rate (%%) : ");
	scanf ("%f",&rate);
	printf ("--------------------\n");
	printf ("Month\t profit (Baht)\n");
	
	while(sum_profit < principal)
	{
		month++;
		profit = principal*(rate/100.0);
		sum_profit += profit;
		printf ("%d\t %.0f\n",month,profit);
	}
	
	printf ("Sum profit = %.0f\n",sum_profit);
	printf ("The interest will equal to the principal within %d months.\n",month);
	printf ("--------------------\n");
}

main() 
{
    char choice;
    while (1) 
	{
        Menu();
        choice = getch();
        printf("%c\n", choice);
        
        if (choice == '1')
		{
            SummaryInterest();
            break;
        } 
		else if (choice == '2') 
		{
            printf("Thank you.\n");
            break;
        } 
		else 
		{
            printf("Wrong choice. Please try again.\n");
        }
        getch();
        system("cls");
    }
    getch();
}
