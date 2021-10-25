#include <stdio.h>
#include <stdlib.h>

/* calificacion */

int main(int argc, char *argv[]) 
{
	float cal;
	printf("dame tu calificacion:");
	scanf("%f",&cal);
	if(cal>=6)
	{
		printf("aprobado");
	}
	else
	if(cal<6)
	{
		printf("reprobado");
	}
	return 0;
}
