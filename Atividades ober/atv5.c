#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int *vet1, *vet2, tam1, tam2, mai;
	
	printf("Tamanho 1 vetor: ");
	scanf("%d" ,&tam1);
	printf("Tamanho 2 vetor: ");
	scanf("%d" ,&tam2);
	
	vet1 = (int*) malloc(tam1 * sizeof(int));
	vet2 = (int*) malloc(tam2 * sizeof(int));
	
	srand(time(NULL));
	
	printf("\nVetor 1:\n");
	for(int i = 0; i<tam1; i++)
	{
		vet1[i]= rand() % 10;
		printf("%d ",vet1[i]);
	}
	
	printf("\nVetor 2:\n");
	for(int i = 0; i<tam2; i++)
	{
		vet2[i]= rand() % 10;
	    printf("%d ",vet2[i]);
	}
	printf("\n\n");
	
	mai = tam1;
	if(mai<tam2)
	{
		mai=tam2;
	}
	
	if(mai==tam1)
	{
		for(int i = 0; i<tam1; i++)
		{
			if(i<tam2)
			{
				vet1[i] += vet2[i];
			}
			else
			{
				vet1[i] += 0;
				vet2[i] = 0;
			}	
		}
		
		for(int i = 0; i<tam1; i++)
		{
			printf("%d + %d = %d\n", (vet1[i]-vet2[i]),vet2[i], vet1[i]);
		}
			
	}
	else
	{
		for(int i = 0; i<tam2; i++)
		{
			if(i<tam1)
			{
				vet2[i] += vet1[i];
			}
			else
			{
				vet2[i] += 0;
				vet1[i] = 0;
			}	
		}
		
		for(int i = 0; i<tam2; i++)
		{
			printf("%d + %d = %d\n", (vet2[i]-vet1[i]),vet1[i], vet2[i]);
		}
				
	}
	
	free(vet2);
	free(vet1);

 	return 0;
}
