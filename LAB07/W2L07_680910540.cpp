#include "stdio.h"
#include "math.h"
#include "conio.h"

int main() {
    int choice;
    float x, y, r, theta;
    
    while(1) 
	{
        printf("*************************\nMain Menu\n*************************\n");
        printf("1. Polar to Cartesian\n");
		printf("2. Cartesian to Polar\n");
		printf("3. Exit\n");
        printf("*************************\nEnter Menu: ");
        scanf("%d", &choice);
        
        if (choice == 1) 
		{
            printf("--- Polar to Cartesian ---\nEnter r: "); 
			scanf("%f", &r);
            printf("Enter theta: "); 
			scanf("%f", &theta);
            x = r * cos(theta * M_PI / 180.0); 
            y = r * sin(theta * M_PI / 180.0); 
            printf("x = %.3f\ny = %.3f\n", x, y);
        } 
		
		else if (choice == 2) 
		{
            printf("--- Cartesian to Polar ---\nEnter x: "); 
			scanf("%f", &x);
            printf("Enter y: "); 
			scanf("%f", &y);
            r = sqrt(x*x + y*y); 
            theta = atan2(y, x) * 180.0 / M_PI; 
            printf("r = %.3f\ntheta = %.3f\n", r, theta);
        } 
		
		else if (choice == 3) 
		{
            printf("******* Thank You *******\n");
            break;
        }
    }
    
    getch();
}
