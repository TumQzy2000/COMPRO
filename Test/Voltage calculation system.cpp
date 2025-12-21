#include "stdio.h"
float V,I,R;
char title[20] = "Voltage Calculation System";

main()
{
	printf("%s\n", title); 
	printf ("Put Your I : ");
	scanf ("%f" , &I);
	printf ("Put Your R : ");
	scanf ("%f" , &R);
	V = I*R;
	printf ("V = %.3f",V);
}
