#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "ctype.h"

char rword[32][10] = {
    "auto", "double", "int", "struct", "break", "else", "long", "switch",
    "case", "enum", "register", "typedef", "char", "extern", "return", "union",
    "const", "float", "short", "unsigned", "continue", "for", "signed", "void",
    "default", "goto", "sizeof", "volatile", "do", "if", "static", "while"
};

main()
{
    char name[50];
    int i;
    int error1 = 0, error2 = 0, error3 = 0, error4 = 0;

    printf("Enter name of variable: ");
    gets(name);

    for(i = 0; i < 32; i++)
    {
        if(strcmp(name, rword[i]) == 0)
        {
            error1 = 1;
            break;
        }
    }

    if( !isalpha(name[0]) && name[0] != '_' )
    {
        error2 = 1;
    }

    for(i = 0; name[i] != '\0'; i++)
    {
        
        if(name[i] == ' ')
        {
            error4 = 1;
        }
        
        else if( !isalnum(name[i]) && name[i] != '_' )
        {
            error3 = 1;
        }
    }

    if(error1 == 0 && error2 == 0 && error3 == 0 && error4 == 0)
    {
        printf("OK\n");
    }
    else
    {
        if(error1) printf("Error Rule 1\n");
        if(error2) printf("Error Rule 2\n");
        if(error3) printf("Error Rule 3\n");
        if(error4) printf("Error Rule 4\n");
    }

    getch();
}
