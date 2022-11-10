#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
	char nome[30];
	int idade;
	char endereco[50];	
};

void leia(struct pessoa *p)
{	
	
	printf("Digite nome: ");
	gets(p->nome);
	printf("Digite idade: ");
	scanf("%d",&p->idade);
	printf("Digite endereco: ");
	fflush(stdin);
	gets(p->endereco);
}

void imprima(struct pessoa p)
{
	printf("Nome: "); puts(p.nome);
	printf("Idade: %d", p.idade);
	printf("\nEndereco: "); puts(p.endereco);
}
	
int main ()
{
	struct pessoa p;
	
	leia(&p);
	imprima(p);
	return 0;
}