#include "stdio.h"
#include "conio.h"

int min(int num1,int num2,int num3,int num4,int num5){
	int min_num = num1;
	if (num2 < min_num) min_num = num2;
	if (num3 < min_num) min_num = num3;
	if (num4 < min_num) min_num = num4;
	if (num5 < min_num) min_num = num5;
	return min_num;
}

int max(int num1,int num2,int num3,int num4,int num5){
	int max_num = num1;
	if (num2 > max_num) max_num = num2;
	if (num3 > max_num) max_num = num3;
	if (num4 > max_num) max_num = num4;
	if (num5 > max_num) max_num = num5;
	return max_num;
}

main()
{
	int n1,n2,n3,n4,n5;
	printf ("Enter Number1 : "); scanf ("%d", &n1);
	printf ("Enter Number2 : "); scanf ("%d", &n2);
	printf ("Enter Number3 : "); scanf ("%d", &n3);
	printf ("Enter Number4 : "); scanf ("%d", &n4);
	printf ("Enter Number5 : "); scanf ("%d", &n5);
	
	printf("Min = %d\n", min(n1, n2, n3, n4, n5));
    printf("Max = %d\n", max(n1, n2, n3, n4, n5));
    
    getch();
    return 0;
}
