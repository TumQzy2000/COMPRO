#include <stdio.h>

int main() {
    int pwd, attempts = 0;
    while (attempts < 3) {
        printf("Enter Password: ");
        scanf("%d", &pwd);
        if (pwd == 6453) {
            printf("*** Open ***\n");
            return 0;
        } else {
            printf("Wrong\n");
            attempts++;
        }
    }
    printf("*** Bye Bye ***\n");
    return 0;
}
