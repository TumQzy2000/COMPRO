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
    int n, i, j;
    while(1) 
	{
        printf("Enter N: ");
        scanf("%d", &n);
        if (n > 1) break;
        printf("Please try again.\n");
    }
    printf("Enter height: %d\n", n); 
    
	for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
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
             DrawTriangle();
        } else if (choice == '2') 
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
