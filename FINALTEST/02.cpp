#include "stdio.h"
#include "conio.h"

int x[7], pad[15] = {0}; 
int w, i, j, max;

main() 
{
    printf("Enter X: ");
    for(i = 0; i < 7; i++) scanf("%d", &x[i]);

    do 
	{
        printf("Enter window size: ");
        scanf("%d", &w);
        if(w < 3 || w > 6) printf("Window size is invalid. Please try again.\n");
    } while(w < 3 || w > 6);

    int offset = w / 2;
    for(i = 0; i < 7; i++) pad[i + offset] = x[i];

    printf("Result of max filter: ");
    for(i = 0; i < 7; i++) 
	{
        max = pad[i];
        for(j = 1; j < w; j++) 
		{
            if(pad[i + j] > max) max = pad[i + j];
        }
        printf("%d ", max);
    }
    
    printf("\n");
    getch();
}
