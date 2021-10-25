#include <stdio.h>
#include <stdlib.h>

/* area del hexagono (lados:6) */

int main(int argc, char *argv[])  
{
	float a,p,t;
	printf("dame el valor de perimetro:");
	scanf("%f",&p);
	printf("dame el valor de apotema:");
	scanf("%f",&t);
	a=p*t/2;
	printf("el area del hexagono es:%f",a);
	return 0;
}
