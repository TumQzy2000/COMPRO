#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Menu() {
    printf("***Menu***\n");
    printf("Press 1 to draw X.\n");
    printf("Press 2 to exit.\n");
}

void DrawX() {
    int n, i, j;
    while(1) {
        printf("Enter height: ");
        scanf("%d", &n);
        if (n >= 3 && n % 2 != 0) break;
        printf("Please try again.\n");
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == i || j == (n - i + 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    char choice;
    while (1) {
        Menu();
        choice = getch();
        printf("%c\n", choice);
        if (choice == '1') {
            DrawX();
        } else if (choice == '2') {
            printf("Thank you.\n");
            break;
        } else {
            printf("Wrong choice. Please try again.\n");
        }
        getch();
        system("cls");
    }
    return 0;
}
