#include "stdio.h"
#include "conio.h"
    
int n, i, num;
float sum = 0, avg;

main()
{


    printf("Enter amount of numbers (max 100): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter number %d : ", i);
        scanf("%d", &num);
        sum += num;
    }

    avg = sum / n;

    printf("Average result : %.4f", avg);
    getch();
    return 0;
}
