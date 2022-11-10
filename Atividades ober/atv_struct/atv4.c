#include <stdio.h>
#include <stdlib.h>

struct data
{
	int dia;
	int mes;
	int ano;	
};

int PassaDia(struct data teste)
{
	return teste.dia;
}

int main ()
{

	struct data teste;
	int rdia;
	
	scanf("%d",&teste.dia);	
	scanf("%d",&teste.mes);	
	scanf("%d",&teste.ano);	
	
	rdia = PassaDia(teste);
	
	printf("Dia = %d", rdia);

	return 0;
}
