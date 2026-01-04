#include "stdio.h"
#include "conio.h"

int x;

main()
{
    printf("Enter Number : ");
    scanf("%d", &x);

    switch (x)
    {
        case 1:
            printf("A ");
            printf("B ");
            break;
        case 2:
            printf("C ");
            break;
        case 3:
            printf("D ");
            break;
        default:
            printf("E ");
            printf("F ");
    }
    getch();
}
