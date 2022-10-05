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
    if((*jog)==3)
    {
    	(*jog)=1;
	}
	else if((*jog)==1)
	{
		velha[]
	}
	
	return jogada;
}

int deuvelha (int *soma, char velha[3][3])
{
	//Verificação Soma de O
    			if(velha[0][0]=='O' && velha[1][0]=='O' && velha[2][0]=='O')
    			{
    				*soma = 1;
				}
				else if(velha[0][1]=='O' && velha[1][1]=='O' && velha[2][1]=='O')
    			{
    				*soma = 1;
				}
				else if(velha[0][2]=='O' && velha[1][2]=='O' && velha[2][2]=='O')
    			{
    				*soma = 1;
				}
				else if(velha[0][0]=='O' && velha[0][1]=='O' && velha[0][2]=='O')
    			{
    				*soma = 1;
				}
				else if(velha[1][0]=='O' && velha[1][1]=='O' && velha[1][2]=='O')
    			{
    				*soma = 1;
				}
				else if(velha[2][0]=='O' && velha[2][1]=='O' && velha[2][2]=='O')
    			{
    				*soma = 1;
				}
				else if(velha[0][0]=='O' && velha[1][1]=='O' && velha[2][2]=='O')
    			{
    				*soma = 1;
				}
				else if(velha[0][2]=='O' && velha[1][1]=='O' && velha[2][0]=='O')
    			{
    				*soma = 1;
				}
				
	//Verificação Soma de X
				if(velha[0][0]=='X' && velha[1][0]=='X' && velha[2][0]=='X')
    			{
    				*soma = 1;
				}
				else if(velha[0][1]=='X' && velha[1][1]=='X' && velha[2][1]=='X')
    			{
    				*soma = 1;
				}
				else if(velha[0][2]=='X' && velha[1][2]=='X' && velha[2][2]=='X')
    			{
    				*soma = 1;
				}
				else if(velha[0][0]=='X' && velha[0][1]=='X' && velha[0][2]=='X')
    			{
    				*soma = 1;
				}
				else if(velha[1][0]=='X' && velha[1][1]=='X' && velha[1][2]=='X')
    			{
    				*soma = 1;
				}
				else if(velha[2][0]=='X' && velha[2][1]=='X' && velha[2][2]=='X')
    			{
    				*soma = 1;
				}
				else if(velha[0][0]=='X' && velha[1][1]=='X' && velha[2][2]=='X')
    			{
    				*soma = 1;
				}
				else if(velha[0][2]=='X' && velha[1][1]=='X' && velha[2][0]=='X')
    			{
    				*soma = 1;
				}
		return soma;
	
}

int main ()
{
    char velha[3][3], jogada;
    int jog = 1;
    int teste = 0
    int soma = 0;
    int tentativas = 1;
    
    zerarmatriz(velha);
    
    do{
    
		abertura();
    	mostrarvelha(velha);
    	jogada = jogadadojogador(&jog, jogada);
    	soma = deuvelha(&soma, velha);
    	tentativas++;
		
    	system("cls");
		
	}while(!soma || tentavivas == 9);
    
        
	return 0;
}
