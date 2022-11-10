#include <stdio.h>
#include <stdlib.h>

struct campos
{
	int x;
	int y;
};

struct campos passaValores(int n1, int n2)
{
	struct campos e;
	
	e.x=n1;
	e.y=n2;
	
	return e;
	
}
int main ()
{
	int n1, n2;
	struct campos e;
	struct campos e2;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	e = passaValores(n1, n2);
	
	e2.x = e.x;
	e2.y = e.y;
	
	printf("\n%d", e2.x);
	printf("\n%d", e2.y);
	

 	return 0;
}
