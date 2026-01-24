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
	int pwd;
	printf ("Create your password: ");
	scanf ("%d",&pwd);
	if ((pwd >= 1000) && (pwd <= 9999))
	{
		printf ("Your password is already set.\n");
		exit(0); //EXIT SET PASSWORD
	}
    else 
	{
        printf("Your password is against the rule. Please try again.\n");
    }
}

main() {
    char choice;
    while (1) {
        Menu();
        choice = getch();
        printf("%c\n", choice);
        if (choice == '1') {
            CheckPassword();
        } else if (choice == '2') {
            printf("Thank you.\n");
            break;
        } else {
            printf("Wrong choice. Please try again.\n");
        }
        printf("Press any key to continue...");
        getch();
        system("cls");
    }
    getch();
}
