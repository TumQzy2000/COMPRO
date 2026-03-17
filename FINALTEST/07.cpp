#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "math.h"

int getColor(char c[]) 
{
    if(strcmp(c, "black")==0) return 0;   if(strcmp(c, "brown")==0) return 1;
    if(strcmp(c, "red")==0) return 2;     if(strcmp(c, "orange")==0) return 3;
    if(strcmp(c, "yellow")==0) return 4;  if(strcmp(c, "green")==0) return 5;
    if(strcmp(c, "blue")==0) return 6;    if(strcmp(c, "purple")==0) return 7;
    if(strcmp(c, "grey")==0) return 8;    if(strcmp(c, "white")==0) return 9;
    return 0;
}

main() 
{
    char b1[20], b2[20], b3[20], b4[20], b5[20];
    double r,mul;
    int err;
    
    printf("Enter color of band #1: "); scanf("%s", b1);
    printf("Enter color of band #2: "); scanf("%s", b2);
    printf("Enter color of band #3: "); scanf("%s", b3);
    printf("Enter color of band #4: "); scanf("%s", b4);
    printf("Enter color of band #5: "); scanf("%s", b5);

    int val = (getColor(b1) * 100) + (getColor(b2) * 10) + getColor(b3);
    
    if (strcmp(b4, "gold") == 0) mul = 0.1;
    else if (strcmp(b4, "silver") == 0) mul = 0.01;
    else mul = pow(10, getColor(b4));
    
    r = val * mul;
    
    if (strcmp(b5, "brown") == 0) err = 1;
	else if (strcmp(b5, "red") == 0) err = 2;
	else if (strcmp(b5, "gold") == 0) err = 5;
	else if (strcmp(b5, "silver") == 0) err = 10;
	
	printf ("R = %.2f Ohm error %d%\n", r,err);
	
    getch();
}
