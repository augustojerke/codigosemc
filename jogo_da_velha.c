#include <stdio.h>
#include <stdlib.h>

void abertura()
{
	printf("-----/JOGO DA VELHA/-----\n");
	printf("\nJogador 1 = X");
	printf("\nJogador 2 = O\n\n");
}

void zerarmatriz (char velha[3][3])
{
	for(int i = 0; i<3; i++)
    {
    	for(int j = 0; j<3; j++)
    	{	
			velha[i][j]=' ';		
		}
	}
}

void mostrarvelha (char velha[3][3])
{
	
	 for(int i = 0; i<3; i++)
    {
    	for(int j = 0; j<3; j++)
    	{
    		if(j == 0)
    		{
    			printf("|%c |", velha[i][j]);	
			}
			else
			{
				printf("%c |", velha[i][j]);
			}
		}
		printf("\n");
	}
	
}

char jogadadojogador(int *jog, char jogada)
{
	printf("\nJogador %d, sua vez! \n", *jog);
    fflush(stdin);
    scanf(" %c",&jogada);
    (*jog)++;
    if(*jog==3)
    {
    	(*jog)=1;
	}
	
	return jogada;
}

int main ()
{
    char velha[3][3], jogada;
    int jog = 1;
    int teste = 0
    int soma = 0;
    
    zerarmatriz(velha);
    
    do{
    
		abertura();
    	mostrarvelha(velha);
    	jogada = jogadadojogador(&jog, jogada);
    	
    			if(velha[0][0]=='O' && velha[1][j]=='O' && velha[2][j]=='O')
    			{
    				soma = 1;
				}
				else if(velha[1][j]=='O' && velha[1][j]=='O' && velha[1][j]=='O')
    			{
    				soma = 1;
				}
				else if(velha[2][j]=='O' && velha[2][j]=='O' && velha[2][j]=='O')
    			{
    				soma = 1;
				}
				if(velha[0][j]=='O' && velha[1][j]=='O' && velha[2][j]=='O')
    			{
    				soma = 1;
				}
				else if(velha[1][j]=='O' && velha[1][j]=='O' && velha[1][j]=='O')
    			{
    				soma = 1;
				}
				else if(velha[2][j]=='O' && velha[2][j]=='O' && velha[2][j]=='O')
    			{
    				soma = 1;
				}
		
    	system("cls");
		
	}while(!teste);
    
        
	return 0;
}