#include "stdio.h"
#include "conio.h"

main()
{
	int pw,round = 0;
	while(round < 3)
	{
		printf ("Enter Password #%d : ",round+1);
		scanf ("%d",&pw);
		
		if (pw == 6453)
		{
			printf ("*** Open ***\n");
			break;
		}
		
		else
		{
			printf ("Wrong\n");
			round++;
		}
	}
	printf ("*** Bye Bye ***");
	getch();
}
