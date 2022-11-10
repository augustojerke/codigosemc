#include <stdio.h>
#include <stdlib.h>

void Primo (int num)
{	
	int div = 0;
	
	for(int i = 1; i<=num; i++)
	{
		if(num%i==0)
		{
			div++;
		}
	}
	
	if(div==2)
	{
		printf("Numero primo!\n");
	}
	else
	{
		printf("Numero nao primo!\n");
	}
}

int main ()
{
	int num;
	
	for(int i = 0; ;i++)
	{
		do{
			scanf("%d",&num);
		}while(num<0);
		
		if(num==0) break;
		Primo(num);	
	}
	
	printf("\nFim do Programa!");
	
 	return 0;
}
