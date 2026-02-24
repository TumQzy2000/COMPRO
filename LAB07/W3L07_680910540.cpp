#include "stdio.h"
#include "complex.h"
#include "conio.h"

main() 
{
    double r, i;
   	_Complex double z1, z2, z3, zeq;

    printf("Enter z1 : ");
    scanf("%lf%lfi", &r, &i);
    z1 = r + i * I;

    printf("Enter z2 : ");
    scanf("%lf%lfi", &r, &i);
    z2 = r + i * I;

    printf("Enter z3 : ");
    scanf("%lf%lfi", &r, &i);
    z3 = r + i * I;

    zeq = z1 + (z2 * z3) / (z2 + z3);
    printf("zeq = %.3f%+.3fi\n", creal(zeq), cimag(zeq));
    
    getch();
}
