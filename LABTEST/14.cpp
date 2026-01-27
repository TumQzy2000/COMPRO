#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Menu() {
    printf("**************\nMenu\n**************\n");
    printf("a. Cylinder\nb. Sphere\nc. Cone\nq. Exit\n**************\n");
}

int main() {
    char choice;
    float r, h, v;
    float pi = 3.14;
    
    while(1) {
        Menu();
        printf("Enter Menu: ");
        scanf(" %c", &choice);
        
        if (choice == 'a') {
            printf("---Cylinder---\n");
            printf("Enter radius: "); scanf("%f", &r);
            printf("Enter height: "); scanf("%f", &h);
            v = pi * r * r * h;
            printf("Volume = %.3f\n", v);
        } else if (choice == 'b') {
            printf("---Sphere---\n");
            printf("Enter radius: "); scanf("%f", &r);
            v = (4.0/3.0) * pi * r * r * r;
            printf("Volume = %.3f\n", v);
        } else if (choice == 'c') {
            printf("---Cone---\n");
            printf("Enter radius: "); scanf("%f", &r);
            printf("Enter height: "); scanf("%f", &h);
            v = (1.0/3.0) * pi * r * r * h;
            printf("Volume = %.3f\n", v);
        } else if (choice == 'q') {
            printf("***Thank you***\n");
            break;
        }
        getch();
        system("cls");
    }
    return 0;
}
