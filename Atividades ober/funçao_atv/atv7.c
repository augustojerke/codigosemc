#include <stdio.h>
#include <stdlib.h>

void Conversao (float temp)
{
	float cel;
	
	cel = (temp-32.0)*(5.0/9.0);
	
	printf("conversao = %.2f", cel);
}


int main ()
{
	float temp;
	
	scanf("%f", &temp);
	
	Conversao(temp);

 	return 0;
}
