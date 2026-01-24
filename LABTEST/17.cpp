#include <stdio.h>

void printNumberPyramid(int height) {
    int i, j;
    for (i = 1; i <= height; i++) {
        for (j = 0; j < i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}

int main() {
    int n;
    while(1) {
        printf("Enter number: ");
        scanf("%d", &n);
        if (n >= 1) break;
        printf("Please try again.\n");
    }
    printNumberPyramid(n);
    return 0;
}
