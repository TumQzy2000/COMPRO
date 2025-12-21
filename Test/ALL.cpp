#include "stdio.h"
#include "conio.h"

float V,I,R;
char title[20] = "ECS SYSTEMS";
char under[20] = "Ready Go"; 
int level;

int main()
{
	printf("%s\n", title);
	printf("%s\n", under);
	printf("Enter Your I : ");
	scanf ("%f" , &I);
	printf("Enter Your R : ");
	scanf ("%f" , &R);
	V = I * R;
	printf("V = %.3f\n",V);
	
	if(V >= 10)
        level = '1';
    else 
        level = '0';
        
    printf("Your Level = %c",level);   
        
	getch();
}
