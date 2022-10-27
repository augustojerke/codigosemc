#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Jogada ()
{
	int moeda, cara = 0, coroa = 0;
	srand(time(NULL));
	
	for(int i = 0; i<100; i++)
	{
		moeda = rand () % 2;
		if(moeda == 0)
		{
			printf("Cara\n");
			cara++;
		}
		else
		{
			printf("Coroa\n");
			coroa++;
		}
	}
	printf("_________________\n");
	printf("Cara = %dx\n", cara);
	printf("Coroa = %dx", coroa);
		
}

int main ()
{
	Jogada();
	
 	return 0;
}
