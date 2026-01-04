#include "stdio.h"
#include "conio.h"

main() {
    int n1, n2, n3, n4;
    int max, min;

    printf("Enter num1: "); scanf("%d", &n1);
    printf("Enter num2: "); scanf("%d", &n2);
    printf("Enter num3: "); scanf("%d", &n3);
    printf("Enter num4: "); scanf("%d", &n4);

    max = n1;
    if (n2 > max) max = n2;
    if (n3 > max) max = n3;
    if (n4 > max) max = n4;

    min = n1;
    if (n2 < min) min = n2;
    if (n3 < min) min = n3;
    if (n4 < min) min = n4;

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    getch();
}
