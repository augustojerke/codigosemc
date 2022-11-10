#include <stdio.h>
#include <stdlib.h>

struct numeros
{
	int n1;
	int n2;
};

void leia(struct numeros *n)
{
	scanf("%d", &n->n1);
	scanf("%d", &n->n2);
}

void inverte(struct numeros *n)
{
	int aux;
	
	aux = n->n1;
	n->n1=n->n2;
	n->n2=aux;
}

int main ()
{
   struct numeros n;
   leia(&n);
   inverte(&n);

   printf("\nn1 = %d", n.n1);
   printf("\nn2 = %d", n.n2);

   return 0;
}
