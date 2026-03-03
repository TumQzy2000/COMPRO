#include "stdio.h"
#include "conio.h"
#include "string.h"

typedef struct 
{
    char id[10];
    char name[50];
    int age;
} student;

main() {
    student sd[5] = 
	{
        {"67091430", "Sopon Phumeechanya", 18},
        {"67091431", "Harry Potter", 25},
        {"67091432", "Captain Marvel", 85},
        {"67091433", "Thor Ragnarok", 40},
        {"67091434", "Tony Stark", 30}
    };
    
    char search_id[10];
    int found = 0;
    
    printf("Enter ID: ");
    scanf("%s", &search_id);
    
    for(int i=0; i<5; i++) 
	{
        if(strcmp(search_id, sd[i].id) == 0) 
		{
            printf("Name of %s = %s\n", sd[i].id, sd[i].name);
            printf("Age of %s = %d\n", sd[i].id, sd[i].age);
            found = 1;
            break;
        }
    }
    
    if(found == 0) 
	{
        printf("ID Error\n");
    }
    
    getch();
}
