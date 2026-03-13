#include "stdio.h"
#include "conio.h"

int x[7], pad[15] = {0}; 
int w, i, j, min;

main() 
{
    printf("Enter X: ");
    for(i = 0; i < 7; i++) scanf("%d", &x[i]);

    do 
	{
        printf("Enter window size: ");
        scanf("%d", &w);
    	if (w != 3 && w != 5) printf("Window size is invalid. Please try again.\n");
    } while (w != 3 && w != 5);

    int offset = (w - 1) / 2;
    for(i = 0; i < 7; i++) pad[i + offset] = x[i];

 	printf ("Result of min filter : ");
 	for (i = 0; i < 7; i++)
 	{
 		min = pad[i];
 		for (j = 1; j < w; j++)
 		{
 			if (pad[i + j] < min) min = pad[i +j];
		}
		printf ("%d",min);
	}
 	
    printf("\n");
    getch();
}
