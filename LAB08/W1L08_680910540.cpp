#include "stdio.h"
#include "conio.h"

struct student 
{
    char name[20];
    int age;
    int height;
};

main() 
{
    struct student sd[4];
    float sum_age = 0, sum_height = 0;
    
    for(int i=0; i<4; i++) 
	{
        printf("Enter name of student #%d: ", i+1);
        scanf("%s", &sd[i].name);
        printf("Enter age of student #%d: ", i+1);
        scanf("%d", &sd[i].age);
        printf("Enter height of student #%d: ", i+1);
        scanf("%d", &sd[i].height);
        
        sum_age = sum_age + sd[i].age;
        sum_height = sum_height + sd[i].height;
    }
    
    printf("\nAverage of age = %.3f\n", sum_age / 4);
    printf("Average of height = %.3f\n", sum_height / 4);
    
    getch();
}
