#include "stdio.h"
#include "conio.h"
#include "string.h"

typedef struct 
{
    char color[10];
    int band_val;
    float multiplier;
    int tolerance;
} r5band;

r5band R[12] = 
{
    {"black", 0, 1e0, -1}, {"brown", 1, 1e1, 1},
    {"red", 2, 1e2, 2}, {"orange", 3, 1e3, -1},
    {"yellow", 4, 1e4, -1}, {"green", 5, 1e5, -1},
    {"blue", 6, 1e6, -1}, {"purple", 7, 1e7, -1},
    {"grey", 8, 1e8, -1}, {"white", 9, 1e9, -1},
    {"gold", -1, 1e-1, 5}, {"silver", -1, 1e-2, 10}
};

r5band findband(char color[10]) 
{
    int i;
    for (i=0; i<12; i++) {
        if (strcmp(color, R[i].color) == 0) {
            return R[i];
        }
    }
    return R[0]; 
}

main() 
{
    char text[5][10];
    int b1, b2, b3, b5;
    float b4, Rval;
    
    for (int i=0; i<5; i++) 
	{
        printf("Enter color of band #%d: ", i+1);
        scanf("%s", &text[i]);
    }
    
    b1 = findband(text[0]).band_val;
    b2 = findband(text[1]).band_val;
    b3 = findband(text[2]).band_val;
    b4 = findband(text[3]).multiplier;
    b5 = findband(text[4]).tolerance;
    
    Rval = ((b1 * 100) + (b2 * 10) + b3) * b4;
    
    printf("R = %.2f Ohm error %d%%", Rval, b5);
    
    getch();
}
