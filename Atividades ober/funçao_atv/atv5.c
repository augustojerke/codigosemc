#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Abertura()
{
	printf("Tenho um numero de 0 a 50\n");
	printf("Voce pode adivinhar meu numero?\n");
	printf("Por favor digite seu palpite\n");
}

void ChuteJogador (int num, int chute)
{
	for(int i = 0; ;i++)
	{
		scanf("%d", &chute);
		
		if(chute>num)
		{
			printf("Muito alto. Tente novamente!\n");
		}
		else if(chute<num)
		{
			printf("Muito baixo. Tente novamente!\n");
		}
		else
		{
			printf("Excelente! Voce adivinhou o numero!");
			break;
		}
	}
}

int main ()
{
	int num, chute;
	
	srand(time(NULL));
	num = rand () % 50;
	
	Abertura();
	ChuteJogador(num, chute);

 	return 0;
}
