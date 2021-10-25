#include <stdio.h>
#include <stdlib.h>

/* area del trapecio */

int main(int argc, char *argv[]) 
{
	float a,B,b,h;
	printf("dame el valor de base mayor:");
	scanf("%f",&B);
	printf("dame el valor de base menor:");
	scanf("%f",&b);
	printf("dame el valor de altura:");
	scanf("%f",&h);
	a=B+b*h/2;
	printf("el area del trapecio es:%f",a);
	return 0;
}
