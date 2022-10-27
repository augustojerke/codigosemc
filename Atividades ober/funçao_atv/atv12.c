#include <stdio.h>
#include <stdlib.h>

void Adiciona (int *x)
{
	(*x)++;
}

int main ()
{
	int x;
	
	scanf("%d",&x);
	
	printf("%d\n",x);
	
	Adiciona(&x);
	
	printf("%d",x);

 	return 0;
}
