#include "stdio.h"
#include "conio.h"

float C,F;

main()
{
	printf ("Enter C = ");
	scanf ("%f",& C);
	F = (1.8*C) + 32;
	printf ("F = %.3f",F);
}
