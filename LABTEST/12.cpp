#include "stdio.h"
#include "conio.h"

int min(int num1, int num2, int num3, int num4, int num5)
{
    int min = num1;
    if (num2 < min) min = num2;
    if (num3 < min) min = num3;
    if (num4 < min) min = num4;
    if (num5 < min) min = num5;
    return min;
}

int max(int num1, int num2, int num3, int num4, int num5) {
    int max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
    if (num4 > max) max = num4;
    if (num5 > max) max = num5;
    return max;
}

main() 
{
    int n1, n2, n3, n4, n5;
    
    printf("Enter Number1: "); scanf("%d", &n1);
    printf("Enter Number2: "); scanf("%d", &n2);
    printf("Enter Number3: "); scanf("%d", &n3);
    printf("Enter Number4: "); scanf("%d", &n4);
    printf("Enter Number5: "); scanf("%d", &n5);
    
    printf("Min = %d\n", min(n1, n2, n3, n4, n5));
    printf("Max = %d\n", max(n1, n2, n3, n4, n5));
    getch();
}
