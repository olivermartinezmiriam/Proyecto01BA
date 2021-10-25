#include <stdio.h>
#include <stdlib.h>

/* area del elipse */

int main(int argc, char *argv[]) 
{
	float a,RM,rm;
	printf("dame el valor de radio mayor:");
	scanf("%f",&RM);
	printf("dame el valor de radio menor:");
	scanf("%f",&rm);
	a=3.1416*RM*rm;
	printf("el area del elipse es:%f",a);
	return 0;
}
