#include "stdio.h"
#include "math.h"
#include "conio.h"

main() 
{
    int x1, y1, x2, y2;
    float d;
    printf("Enter x1: "); scanf("%d", &x1);
    printf("Enter y1: "); scanf("%d", &y1);
    printf("Enter x2: "); scanf("%d", &x2);
    printf("Enter y2: "); scanf("%d", &y2);
    
    d = sqrt( pow(x1 - x2, 2) + pow(y1 - y2, 2) ); 
    printf("Distance = %.3f\n", d);
  	
  	getch();
}
