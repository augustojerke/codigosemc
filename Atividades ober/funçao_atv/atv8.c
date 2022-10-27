#include <stdio.h>
#include <stdlib.h>

int Area (int alt, int bas)
{
	return alt*bas;
}

int main ()
{
	int alt, bas, res;
	
	printf("Digite a altura do retangulo: ");
	scanf("%d", &alt);
	printf("Digite a base do retangulo: ");
	scanf("%d", &bas);
	
	res = Area(alt, bas);
	
	printf("Area = %d", res);
	
 	return 0;
}
