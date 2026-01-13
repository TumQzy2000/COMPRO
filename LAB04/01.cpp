#include "stdio.h"
#include "conio.h"

int main() {
    int num, i, j;

    printf("Enter Number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        
        printf("#\n");
    }

    getch();
}
