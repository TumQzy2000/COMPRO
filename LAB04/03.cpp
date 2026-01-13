#include "stdio.h"
#include "conio.h"

int main() {
    int pw;
    int count = 0; 

    while (count < 3) {
        printf("Enter Password: ");
        scanf("%d", &pw);

        if (pw == 6453) {
            printf("*** Open ***\n");
            break; 
        } else {
            printf("Wrong\n");
            count++; 
        }

        if (count == 3) {
            printf("*** Bye Bye ***\n");
        }
    }

    getch();
}
