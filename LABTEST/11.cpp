#include "stdio.h"
#include "conio.h"

main() {
    int pwd, count = 0;
    while (count < 3) 
	{
        printf("Enter Password: ");
        scanf("%d", &pwd);
        if (pwd == 6453) 
		{
            printf("*** Open ***\n");
            break;
        } 
		else 
		{
            printf("Wrong\n");
            count++;
        }
    }
    printf("*** Bye Bye ***\n");
    getch();
}
