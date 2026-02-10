#include "stdio.h"
#include "conio.h"
main()
{
    int i, j;
    int A[3][3];
    printf("A=\n");
    printf("A[0][0] A[0][1] A[0][2]\n");
    printf("A[1][0] A[1][1] A[1][2]\n");
    printf("A[2][0] A[2][1] A[2][2]\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("A[%d][%d]=", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("\n A=\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }
    getch();
}
