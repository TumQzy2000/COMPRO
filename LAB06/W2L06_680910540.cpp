#include "stdio.h"
#include "conio.h"
#include "string.h"

main()
{
    char text[50];
    int i;
    int position = -1; 

    printf("Enter your text: ");
    gets(text);

    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i] == 'a')
        {
            position = i; 
            break;        
        }
    }

    printf("%d\n", position);

    getch();
}
