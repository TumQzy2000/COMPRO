#include "stdio.h"
#include "conio.h"
#include "math.h"

void findRoots(float a, float b, float c, float *r1, float *i1, float *r2, float *i2) 
{
	float d = (b * b) - (4 * a * c);
	if (d >= 0)
	{
		*r1 = (-b + sqrt(d)) / (2 * a);
		*r2 = (-b - sqrt(d)) / (2 * a);
		*i1 = 0;
		*i2 = 0;
	}
	
	else
	{
		*r1 = -b / (2 * a);
		*r2 = -b / (2 * a);
		*i1 = sqrt(-d) / (2 * a);
		*i2 = -sqrt(-d) / (2 * a);
	}
	
}

main() 
{
    float a,b,c,r1,r2,i1,i2;
    printf("Enter a: "); scanf("%f", &a);
    printf("Enter b: "); scanf("%f", &b);
    printf("Enter c: "); scanf("%f", &c);

    findRoots(a, b, c, &r1, &i1, &r2, &i2);

    if (i1 == 0)
    {
    	printf ("x1 = %.3f\nx2 = %.3f\n",r1,r2);
	}
	
	else
	{
		printf ("x1 = %.3f+%.3fi\n", r1,i1);
		printf ("x2 = %.3f%.3fi\n", r2,i2);
	}
    
    getch();
}
