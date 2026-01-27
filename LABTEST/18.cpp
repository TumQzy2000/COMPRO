#include "stdio.h"
#include "conio.h"

int deposit(int currentBalance, int amount) 
{
    return currentBalance + amount;
}

int withdraw(int currentBalance, int amount) 
{
    if (amount > currentBalance) 
	{
        printf(">>> [Error] Insufficient balance!\n");
        printf("(Available: %d Baht)\n", currentBalance);
        return currentBalance;
    }
    return currentBalance - amount;
}

main() {
    int balance = 1000, choice, amt;
    
    printf("Welcome to ATM System\n");
    while(1) 
	{
        printf("ATM MENU\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Select menu: ");
        scanf("%d", &choice);

        if (choice == 1) 
		{
            printf(">>> Your current balance is: %d Baht\n", balance);
        } 
		else if (choice == 2) 
		{
            printf("Enter amount to deposit: ");
            scanf("%d", &amt);
            balance = deposit(balance, amt);
            printf(">>> Deposit successful! Your new balance is: %d Baht\n", balance);
        } 
		else if (choice == 3) 
		{
            printf("Enter amount to withdraw: ");
            scanf("%d", &amt);
            balance = withdraw(balance, amt);
        } 
		else if (choice == 4) 
		{
            printf("Thank you for using our service. Goodbye!\n");
            break;
        }
        printf("\n");
    }
    getch();
}
