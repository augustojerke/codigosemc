#include <stdio.h>
#include <stdlib.h>

void VerificaRepetidos (int vet1[5], int vet2[5])
{
	int flag, res[5], cont = 0;
	
	for(int i = 0; i<5; i++)
	{
		flag = 0;
		
		for(int j = 0; j<5; j++)
		{
			if(vet1[i]==vet2[j])
			{
				flag = 1;
			}
		}
		
		for(int k = 0; k<cont; k++)
		{
			if(vet1[1]==res[cont])
			{
				flag = 0;
				cont++;
			}
		}
		if(flag==1)
		{
			res[cont]=vet1[i];
			cont++;
		}
	}
	
	printf("\nValores repitidos: \n");	
	
	for(int i = 0; i<cont;i++)
	{
		printf("%d ", vet1[i]);
	}
}

int main ()
{
	
	int vet1[5], vet2[5];
	
	printf("Vetor 1\n");
	for(int i = 0; i<5; i++)
	{
		scanf("%d", &vet1[i]);
	}
	printf("\nVetor 2\n");
	for(int i = 0; i<5; i++)
	{
		scanf("%d", &vet2[i]);
	}
	
	VerificaRepetidos(vet1, vet2);

 	return 0;
}
