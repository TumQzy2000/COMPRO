#include "stdio.h"
#include "conio.h"

float C,F;

main()
{
	printf ("Enter Celsius = ");
	scanf ("%f",& C);
	F = (1.8*C) + 32;
	printf ("Fahrenheit = %.3f",F);
}
