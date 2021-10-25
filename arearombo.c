#include <stdio.h>
#include <stdlib.h>

/* area del rombo */

int main(int argc, char *argv[]) 
{
	float a,D,d;
	printf("dame el valor de diagonal mayor:");
	scanf("%f",&D);
	printf("dame el valor de diagonal menor:");
	scanf("%f",&d);
	a=D*d/2;
	printf("el area del rombo es:%f",a);
	return 0;
}
