#include "stdio.h"
#include "conio.h"
#include "stdlib.h" 

int Opt()
{
	int opt;
    system("cls"); 
	printf ("----- SELEC OPTION -----\n");
	printf ("----- Voltage AS 1. -----\n");
	printf ("----- Resistor AS 2. -----\n");
    printf ("----- Exit AS 0. -----\n"); 
	printf ("Enter Your OPT : ");
	scanf ("%d",&opt); 
	return opt;
}

void Voltage() 
{
	int V, I, R; 
	printf ("Enter I: "); scanf("%d", &I);
	printf ("Enter R: "); scanf("%d", &R);
	V = I*R;
	printf ("Voltage = %d",V);
	getch();
}

void Resistor() 
{
	int Req, R1, R2; 
	printf ("Enter R1: "); scanf("%d", &R1);
	printf ("Enter R2: "); scanf("%d", &R2);
	Req = R1 + R2;
	printf ("Resistor = %d",Req);
	getch();
}

main() 
{
	int opt;
    while(1) {
        opt = Opt();
        if (opt == 0) break;
        switch(opt) {
            case 1: Voltage(); break; 
            case 2: Resistor(); break;
        }
    }
    printf("\n**** Thank You ****\n");
	getch();
}
