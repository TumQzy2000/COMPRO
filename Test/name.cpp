#include <stdio.h>
#include <conio.h> 

char choice;
char select;
char name[100];
float C,F,V,I,R;

main() 
{
	//Fuction enter to program//
    printf("Do you want to continue? (y/n): ");
    choice = getche(); 
    
    if(choice == 'y') 
	{
        printf("\nLoading next level...\n");
        printf("Enter Your Name : ");
        scanf("%s",&name);
        printf("Hi %s Welcome To Program\n",name);
    } 
    
    //Fuction choose enter program//
    printf("Choose the program\n");
    printf("Program 1 : C to F\n");
    printf("Program 2 : Resistor\n");
    select = getch(); 
    
	if(select == '1') 
	{
        printf("\nWelcome to C to F\n");
        printf("Enter Your C : ");
        scanf("%f",&C);
        F = (1.8*C) + 32;
        printf("F result %.3f",F);
    } 
    
    else(select == '2');
    {
    	printf("\nWelcome to Resistor\n");
        printf("Enter Your V : ");
        scanf("%f",&V);
        printf("Enter Your I : ");
        scanf("%f",&I);
        R = V/I;
        printf("R result %.3f",R);
	}
    
    //Fuction exit or stay program//
    printf("\nDo you want to exit program? (y/n): \n");
    choice = getch(); 
    
	if (choice == 'y')  
	{
        printf("\nExit program.\n");
        printf("Goodbye %s\n",name);
    }
    
    else if (choice == 'n')
    {
    	printf ("You can stay in program\n");
	}
	
}
