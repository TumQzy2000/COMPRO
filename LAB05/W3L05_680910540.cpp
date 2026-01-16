#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

#define PI 3.14


char menu() {
    char choice;
    system("cls"); // ?????????????
    printf("*******************\n");
    printf("    Main Menu      \n");
    printf("*******************\n");
    printf(" a. Cylinder\n");
    printf(" b. Sphere\n");
    printf(" c. Cone\n");
    printf(" q. Exit\n");
    printf("*******************\n");
    printf("Enter Menu: ");
    scanf(" %c", &choice);
    return choice;
}

void cylinder() {
    float r, h, vol;
    printf("---- Cylinder ----\n");
    printf("Enter radius: "); scanf("%f", &r);
    printf("Enter height: "); scanf("%f", &h);
    vol = PI * r * r * h;
    printf("Volume = %.3f\n", vol);
    getch(); 
}

void sphere() {
    float r, vol;
    printf("---- Sphere ----\n");
    printf("Enter radius: "); scanf("%f", &r);
    vol = (4.0/3.0) * PI * r * r * r;
    printf("Volume = %.3f\n", vol);
    getch();
}

void cone() {
    float r, h, vol;
    printf("---- Cone ----\n");
    printf("Enter radius: "); scanf("%f", &r);
    printf("Enter height: "); scanf("%f", &h);
    vol = (1.0/3.0) * PI * r * r * h;
    printf("Volume = %.3f\n", vol);
    getch();
}

int main() {
    char choice;
    while(1) { 
        choice = menu();
        if (choice == 'q') break;
        
        switch(choice) {
            case 'a': cylinder(); break;
            case 'b': sphere(); break;
            case 'c': cone(); break;
            default: break;
        }
    }
    printf("\n**** Thank You ****\n");
    getch();
    return 0;
}
