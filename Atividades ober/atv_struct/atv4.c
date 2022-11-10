#include <stdio.h>
#include <stdlib.h>

struct data
{
	int dia;
	int mes;
	int ano;	
};

int main ()
{

	struct data teste = {15,4,1999};
	
	printf("%d", teste.mes);
	


	return 0;
}
