#include "stdio.h"

float V,R,I;

main()
{
	printf ("Enter V = ");
	scanf ("%f",&V);
	printf ("Enter R = ");
	scanf ("%f",&R);
	I = V/R;
	printf ("I = %.4f",I);
}
