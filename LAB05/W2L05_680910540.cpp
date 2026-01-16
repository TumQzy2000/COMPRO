#include "stdio.h"
#include "conio.h"

float Req(char option, int R1, int R2, int R3) {
    float result = 0.0;
    
    if (option == 's') {
        result = (float)R1 + R2 + R3;
    } else if (option == 'p') {
        result = 1.0 / ((1.0/R1) + (1.0/R2) + (1.0/R3));
    }
    
    return result;
}

int main() {
    char opt;
    int r1, r2, r3;

    printf("Enter Option (s or p): ");
    scanf("%c", &opt); 
    printf("Enter R1: "); scanf("%d", &r1);
    printf("Enter R2: "); scanf("%d", &r2);
    printf("Enter R3: "); scanf("%d", &r3);

    printf("Req = %.2f Ohm\n", Req(opt, r1, r2, r3));

    getch();
    return 0;
}
