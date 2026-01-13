#include "stdio.h"
#include "conio.h"

int main() {
    int num1, num2, i;

    printf("Enter Number 1 : ");
    scanf("%d", &num1);
    printf("Enter Number 2 : ");
    scanf("%d", &num2);
    
    if (num1 <= num2) {
        for (i = num1; i <= num2; i++) {
            printf("%d ", i);
        }
    } 

    else {
        for (i = num1; i >= num2; i--) {
            printf("%d ", i);
        }
    }

    getch();
}
