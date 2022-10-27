#include <stdio.h>
#include <stdlib.h>

void ParImpar (int num)
{	
	if(num%2==0)
	{
		printf("%d eh par\n", num);
	}
	else
	{
		printf("%d eh impar\n", num);
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
		ParImpar(num);	
	}
	
	printf("\nFim do Programa!");
	
 	return 0;
}
