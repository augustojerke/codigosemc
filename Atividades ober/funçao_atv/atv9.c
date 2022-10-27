#include <stdio.h>
#include <stdlib.h>

int Bi (int ano)
{
	if(ano%400==0 || ano%4==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main ()
{
	int ano, res;
	
	scanf("%d", &ano);
	
	res = Bi(ano);
	
	if(res==1)
	{
		printf("Retornou 1 = eh bissexto");
	}
	else
	{
		printf("Retornou 0 = nao eh bissexto");
	}
	
 	return 0;
}
