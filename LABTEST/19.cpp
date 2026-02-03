#include "stdio.h"
#include "conio.h"

float myAbsolute(float input)
{
	if (input < 0) return -input;
	return input;
}

float getDecimalPart(float input)
{
	int i = int(input);
	float dec = input - i;
	if (dec < 0) return -dec;
	return dec;
}

main() 
{
	float val;
	printf ("Enter value : ",&val);
	scanf ("%f",&val);
	printf ("Input : %.2f\n",val);
	printf ("Absolute : %.2f\n",myAbsolute(val));
	printf ("Integer Part : %d\n",int(val));
	printf ("Decimal Part : %.2f\n",getDecimalPart(val));
	getch();
}
