#include <stdio.h>
#include <stdlib.h>

struct produtos
{
	char nome[50];
	float valor;	
};

int main ()
{
	struct produtos p[10];
	
	for(int i = 0; i<10; i++)
	{
		printf("Produto %d:\n", i+1);
		printf("Nome: ");
		fflush(stdin);
		gets(p[i].nome);
		printf("Valor: ");
		scanf("%f", &p[i].valor);
	}	
	
	system("cls");
	
	for(int i = 0; i<10; i++)
	{
		printf("Produto %d:\n", i+1);
		printf("Nome: "); puts(p[i].nome);
		printf("Valor: %.2f", p[i].valor);
		printf("\n----------------------\n");
	}	
	
	return 0;
}
