#include "stdio.h"
#include "conio.h"
#include "string.h"

main() 
{
    char name[50], surname[50], birth[20];

    printf("Enter your name: "); scanf("%s", name);
    printf("Enter your surname: "); scanf("%s", surname);
    printf("Enter your birthday: "); scanf("%s", birth);

    printf("Your username: ");
    
    int len = strlen(name);
    printf("%c%c%c", name[0], name[1], name[len-1]);
    printf("%c%c%c%c", surname[0], surname[1], surname[2], surname[3]);
    printf("%c%c%c%c\n", birth[1], birth[3], birth[6], birth[7]);

    getch();
}
