#include "stdio.h"
#include "conio.h"

int x[7], pad[15] = {0};
int w, i, j;
float sum;

main() 
{
	printf ("Enter X : ");
	for (i = 0; i < 7; i++) scanf ("%d",x[i]);
	
	do
	{
		printf ("Enter window size");
		scanf ("%d",&w);
    	if (w != 3 && w != 5) printf("Window size is invalid. Please try again.\n");
    } while (w != 3 && w != 5);

    int offset = (w - 1) / 2;
	for (i = 0; i < 7; i++) pad[i + offset] = x[i];
	
	printf ("Result of average filter : ");
	for (i = 0; i < 7; i++)
	{
		sum = 0;
		for (j = 0; j < w; j++) sum += pad[i + j];
		printf ("%.2f ",sum / w);
	}
    
    printf("\n");
    getch();
}
