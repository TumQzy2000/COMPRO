#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Menu() {
    printf("***Menu***\n");
    printf("Press 1 to show Fibonacci Sequence.\n");
    printf("Press 2 to exit.\n");
}

void Fibonacci() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    char choice;
    while (1) {
        Menu();
        choice = getch();
        printf("%c\n", choice);
        if (choice == '1') {
            Fibonacci();
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
