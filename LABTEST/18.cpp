#include "stdio.h"
#include "conio.h"

int deposit (int currentBalance, int amount)
{
	return currentBalance + amount;
}

int withdraw (int currentBalance, int amount)
{
	if (amount > currentBalance)
	{
		printf (">>>[Error] Insufficient balance!\n");
		printf ("(Available : %d Bath)\n",currentBalance);
		return currentBalance;
	}
	return currentBalance - amount;
}

main() 
{
   	int choice,balance = 1000,amount;
   	
    printf ("Welcome to ATM System\n");
    
    while(1)
    {
    	printf ("---------- ATM MENU ----------\n");
		printf ("1. Check Balance\n");
		printf ("2. Deposit\n");
		printf ("3. Withdraw\n");
		printf ("4. Exit\n");
		printf ("-------------------------------\n");
		printf ("Select menu : ");
		scanf ("%d",&choice);
		
		if (choice == 1)
		{
			printf (">>> Your current balance is : %d",balance);
		}
		
		else if (choice == 2)
		{
			printf ("Enter amount to deposit : ");
			scanf ("%d",&amount);
			balance = deposit (balance,amount);
			printf (">>> Deposit successful ! Your new balance is : %d",balance);
		}
		
		else if (choice == 3)
		{
			printf ("Enter amount to withdraw : ");
			scanf ("%d",&amount);
			balance = withdraw(balance,amount);
		}
		
		else if (choice == 4)
		{
			printf ("Thank you using our service. Goodbye !\n");
		}
		printf ("\n");
	}
	
	getch();
}
