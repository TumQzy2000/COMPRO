#include "stdio.h"
#include "conio.h"

void deltaToWye(float r1, float r2, float r3, float *ra, float *rb, float *rc) 
{
    float sum = r1 + r2 + r3;
    *ra = (r1 * r2) / sum;
    *rb = (r2 * r3) / sum;
    *rc = (r1 * r3) / sum;
}

void wyeToDelta(float ra, float rb, float rc, float *r1, float *r2, float *r3) 
{
    float top = (ra * rb) + (rb * rc) + (ra * rc);
    *r1 = top / rb;
    *r2 = top / rc;
    *r3 = top / ra;
}

main() 
{
    int menu;
    float r1, r2, r3, ra, rb, rc;

    while(1) 
	{
        printf("\n*** Main Menu ***\n");
		printf("1. Delta to Wye\n");
		printf("2. Wye to Delta\n");
		printf("3. Exit\n");
		printf("Enter Menu: ");
        scanf("%d", &menu);
        
        if(menu == 3) {
            printf("**** Thank You ****\n");
            break;
        }

        if(menu == 1) 
		{
            printf("Enter R1: "); scanf("%f", &r1);
            printf("Enter R2: "); scanf("%f", &r2);
            printf("Enter R3: "); scanf("%f", &r3);
            deltaToWye(r1, r2, r3, &ra, &rb, &rc);
            printf("RA = %.3f\nRB = %.3f\nRC = %.3f\n", ra, rb, rc);
        } 
		else if(menu == 2) 
		{
            printf("Enter RA: "); scanf("%f", &ra);
            printf("Enter RB: "); scanf("%f", &rb);
            printf("Enter RC: "); scanf("%f", &rc);
            wyeToDelta(ra, rb, rc, &r1, &r2, &r3);
            printf("R1 = %.3f\nR2 = %.3f\nR3 = %.3f\n", r1, r2, r3);
        }
    }
    getch();
}
