#include <stdio.h>
#include <stdlib.h>
struct campos
{
	int x;
	int y;
};

struct campos funcao (int n1, int n2)
{
	struct campos retorno;
	
	retorno.x=n1;
	retorno.y=n2;
	
	return retorno;
}
int main ()
{
	int x, y;
	struct campos c;
	
	scanf("%d%d",&x,&y);
	
	c = funcao(x, y);
	
	printf("\n%d", c.x);
	printf("\n%d", c.y);
	
 	return 0;
}
