#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "ctype.h"

main() 
{
    char pass[50];
    int alpha = 0, digit = 0, space = 0, special = 0;

    printf("Enter your password: ");
    scanf(" %[^\n]", pass); 

    int len = strlen(pass);
    for(int i = 0; i < len; i++) 
	{
        if(isalpha(pass[i])) alpha++;
        else if(isdigit(pass[i])) digit++;
        else if(pass[i] == ' ') space++;
        else special++;
    }

    int ok = 1;
    if(len != 6) { printf("Error Rule1\n"); ok = 0; }
    if(alpha != 2) { printf("Error Rule2\n"); ok = 0; }
    if(digit != 2) { printf("Error Rule3\n"); ok = 0; }
    if(space != 0) { printf("Error Rule4\n"); ok = 0; }
    if(special != 2) { printf("Error Rule5\n"); ok = 0; }

    if(ok == 1) printf("OK\n");

    getch();
}
