#include "stdio.h"

float H,W,D;

main()
{
	printf ("Enter High = ");
	scanf ("%f",&H);
	printf ("Enter Wide = ");
	scanf ("%f",&W);
	D = (0.5 * H * W);
	printf ("Delta Space = %.4f",D);
}
