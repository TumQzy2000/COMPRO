#include "stdio.h"
#include "conio.h"

main() 
{
	int target = 8;
	int i,guess,win = 0;
	
	for (i = 1; i <= 8; i++)
	{
		printf ("Enter Number (0 - 99) #%d",i);
		scanf ("%d",&guess);
		
		if (guess == target)
		{
			printf ("KengJungJung");
			win = 1;
			break;
		}
		
		else if (guess < target)
		{
			printf  ("Up");
		}
		
		if (guess > target)
		{
			printf ("Down");
		}
	}
	
	if (win == 0)
	{
		printf ("Game Over\n");
		printf ("The answer is %d",target);
	}
	
	getch();
}
