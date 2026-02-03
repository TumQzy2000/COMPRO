#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

void Menu() 
{
  	printf ("**************\n");
  	printf ("     Menu\n");
  	printf ("**************\n");
  	printf ("a. Rectangle\n");
  	printf ("b. Triangle\n");
  	printf ("c. Circle\n");
  	printf ("q. Exit\n");
  	printf ("**************\n");
}

main() 
{
    char choice;
    float w, l, b, h, r, area;
    float pi = 3.14;
    
    while(1) 
	{
        Menu();
        printf("Enter Menu: ");
        scanf(" %c", &choice);
        
        if (choice == 'a') 
		{
            printf("---Rectangle---\n");
            printf("Enter width: "); scanf("%f", &w);
            printf("Enter length: "); scanf("%f", &l);
            area = w * l;
            printf("Area = %.3f\n", area);
            printf ("--------------\n");
        } 
		else if (choice == 'b') 
		{
            printf("---Triangle---\n");
            printf("Enter base: "); scanf("%f", &b);
            printf("Enter height: "); scanf("%f", &h);
            area = 0.5 * b * h;
            printf("Area = %.3f\n", area);
            printf ("--------------\n");
        } 
		else if (choice == 'c') 
		{
            printf("---Circle---\n");
            printf("Enter radius: "); scanf("%f", &r);
            area = pi * r * r;
            printf("Area = %.3f\n", area);
            printf ("--------------\n");
        } 
		else if (choice == 'q') 
		{
            printf("***Thank you***\n");
            break;
        }
        getch();
        system("cls");
    }
    getch();
}
