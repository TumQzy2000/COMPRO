#include "stdio.h"
#include "conio.h"

main() 
{
    int target = 8; 
    int guess, i, win = 0;

    for(i = 1; i <= 8; i++) 
	{
        printf("Enter Number (0-99) #%d: ", i);
        scanf("%d", &guess);

        if(guess == target) 
		{
            printf("KengJungJung\n");
            win = 1;
            break;
        } 
		else if(guess < target) 
		{
            printf("Up\n");
        } 
		else 
		{
            printf("Down\n");
        }
    }

    if(win == 0) 
	{
        printf("Game Over\nThe answer is %d\n", target);
    }
    
    getch();
}
