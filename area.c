#include <stdio.h>
#include <stdlib.h>

/* area del poligono regular */

int main(int argc, char *argv[]) 
{
	float a,p,t;
	printf("dame el valor de perimetro:");
	scanf("%f",&p);
	printf("dame el valor de apotema:");
	scanf("%f",&t);
	a=p*t/2;
	printf("el area del poligono regular es:%f",a);
	return 0;
}
