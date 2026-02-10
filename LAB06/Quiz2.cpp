#include <stdio.h>
#include <conio.h>

main()
{
    int A[3][3];
    int i, j;
    long det; // ??? long ???????????????????????????????????

    // 1. ??????
    printf("Enter Matrix A (3x3):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // 2. ?????????????????
    printf("\nA =\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }

    // 3. ????? Det (????????? - ???????)
    det = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) 
        - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0]) 
        + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);

    printf("\ndet(A) = %ld\n", det);
    getch();
}
