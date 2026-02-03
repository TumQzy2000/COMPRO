#include "stdio.h"
#include "conio.h"

int myRoundDown(float input) 
{
	int i = int(input);
	if (input >= 0) return i;
	else
	{
		if (input == 0) return i;
		else return i-1;
	}
}

int myRoundUp(float input)
{
	int i = int(input);
	if (input >= 0)
	{
		if (input == 0) return i;
		else return i+1;
	}
	else 
	{
		return i;
	}
}

main() 
{
   float val;
   printf ("Enter value : ");
   scanf ("%f",&val);
   
   if (val >= 0)
   {
   		printf ("Positive %.1f : Down = %d, Up =%d\n",val,myRoundDown(val),myRoundUp(val));
   }
   else
   {
   		printf ("Negative %.1f : Down = %d, Up = %d\n",val,myRoundDown(val),myRoundUp(val));
   }
   getch();
}
