#include "stdio.h"
#include "conio.h"
#include "math.h"

void carToSph(float x, float y, float z, float *rho, float *phi, float *theta) 
{
	*rho = sqrt((x * x) + (y * y) + (z * z));
	*phi = acos(z / *rho) * (180.0 / 3.14159);
	*theta = atan2(y , x) * (180.0 / 3.14159); 
}  

void sphToCar(float rho, float phi, float theta, float *x, float *y, float *z) 
{
	float p_rad = phi * (3.14159 / 180.0);
	float t_rad = theta * (3.14159 / 180.0);
	*x = rho * sin(p_rad) * cos(t_rad);
	*y = rho * sin(p_rad) * sin(t_rad);
	*z = rho * cos(p_rad);
}

main() 
{
    int menu;
    float x, y, z, rho, phi, theta;

    while(1) 
	{
		printf ("*******************\n");
    	printf("\n** Main Menu **\n");
    	printf ("*******************\n");
		printf("1. Cartesian to Spherical\n");
		printf("2. Spherical to Cartesian\n");
		printf("3. Exit\n");
		printf ("*******************\n");
		printf("Enter Menu: ");
        scanf("%d", &menu);
        printf ("\n");
        
        if(menu == 1) 
		{
			printf ("=Cartesian to Spherical=\n");
            printf("Enter x: "); scanf("%f", &x);
            printf("Enter y: "); scanf("%f", &y);
            printf("Enter z: "); scanf("%f", &z);
            carToSph(x, y, z, &rho, &phi, &theta);
            printf("Rho = %.3f\nPhi = %.3f\nTheta = %.3f\n", rho, phi, theta);
        } 
        
		else if(menu == 2) 
		{
			printf ("Spherical to Cartesian\n");
            printf("Enter Rho: "); scanf("%f", &rho);
            printf("Enter Phi: "); scanf("%f", &phi);
            printf("Enter Theta: "); scanf("%f", &theta);
            sphToCar(rho, phi, theta, &x, &y, &z);
            printf("x = %.3f\ny = %.3f\nz = %.3f\n", x, y, z);
        }
        
        if(menu == 3)
		{
            printf("**** Thank You ****\n");
            break;
        }
    }
    
    getch();
}
