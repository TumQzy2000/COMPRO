#include "stdio.h"
#include "string.h"
#include "conio.h"

main() 
{
 	char name[50], surename[50], birth[50];
	printf ("Enter your name : "); scanf ("%s", name);
	printf ("Enter your surename : "); scanf ("%s", surename);
	printf ("Enter your birthday : "); scanf ("%s", birth);
	
	printf ("Your username : ");
    
	int len = strlen(name);
	printf ("%c%c%c",name[0], name[1], name[len-1]);
	printf ("%c%c%c%c", surename[0], surename[1], surename[2], surename[3]);
	printf ("%c%c%c%c", birth[1], birth[3], birth[6], birth[7]);
	
	getch();
}
