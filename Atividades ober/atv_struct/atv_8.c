#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
	char nome[30];
	char endereco[50];
};

int main ()
{
	
	struct pessoa *p;
	
	p = (struct pessoa*) malloc(sizeof(struct pessoa));

	gets(p->nome);
	fflush(stdin);
	gets(p->endereco);
	
	printf("Nome: "); puts(p->nome);
	printf("Endereco: "); puts(p->endereco);
	
 	return 0;
}
