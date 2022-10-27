#include <stdio.h>
#include <stdlib.h>

void Inverte (int *x, int *y)
{
	int aux;
	
	aux=*x;
	*x=*y;
	*y=aux;
}

int main ()
{
	int x, y;
	
	scanf("%d%d",&x,&y);
	
	printf("%d - %d",x,y);
	
	Inverte(&x, &y);
	
	printf("\nInverteu\n");
	
	printf("%d - %d",x,y);
	
 	return 0;
}
