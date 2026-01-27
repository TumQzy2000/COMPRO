#include <stdio.h>

int min(int num1, int num2, int num3, int num4, int num5) {
    int m = num1;
    if (num2 < m) m = num2;
    if (num3 < m) m = num3;
    if (num4 < m) m = num4;
    if (num5 < m) m = num5;
    return m;
}

int max(int num1, int num2, int num3, int num4, int num5) {
    int m = num1;
    if (num2 > m) m = num2;
    if (num3 > m) m = num3;
    if (num4 > m) m = num4;
    if (num5 > m) m = num5;
    return m;
}

int main() {
    int n1, n2, n3, n4, n5;
    printf("Enter Number1: "); scanf("%d", &n1);
    printf("Enter Number2: "); scanf("%d", &n2);
    printf("Enter Number3: "); scanf("%d", &n3);
    printf("Enter Number4: "); scanf("%d", &n4);
    printf("Enter Number5: "); scanf("%d", &n5);
    
    printf("Min = %d\n", min(n1, n2, n3, n4, n5));
    printf("Max = %d\n", max(n1, n2, n3, n4, n5));
    return 0;
}
