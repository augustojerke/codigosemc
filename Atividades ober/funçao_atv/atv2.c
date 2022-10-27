#include <stdio.h>
#include <stdlib.h>

float MenorNumero(float n1, float n2)
{
	float men;
	
	if(n1<n2)
	{
		men=n1;
	}
	else if(n2<n1)
	{
		men=n2;
	}
	else
	{
		men=0;
	}
	
	return men;
}

int main ()
{
	float n1, n2, men;
	
	scanf("%f%f", &n1, &n2);
	
	men = MenorNumero(n1, n2);
	
	if(men!=0)
	printf("Menor numero = %.2f", men);
	else
	printf("Os numeros sao iguais");
	
 	return 0;
}
