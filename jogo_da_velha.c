#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

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

int verificarvelha (char velha [3][3])
{
	int flagvelha = 1;
	
	for(int i = 0; i<3; i++)
    	{
    		for(int j = 0; j<3; j++)
    		{
    			if(velha[i][j]==' ')
    			{
    				flagvelha = 0;
				}
			}
		}
	return flagvelha;
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

void jogadadojogador(int *jog, int jogada, int jogada2, char velha[3][3])
{
	if((*jog)==3)
    {
    	(*jog)=1;
	}
	printf("\nJogador %d, sua vez! (Digite linha e coluna respectivamente) \n", *jog);
    printf("Linha: \n");
    fflush(stdin);
    scanf("%d",&jogada);
    printf("Coluna: \n");
    fflush(stdin);
    scanf("%d",&jogada2);
	if((*jog)==1)
	{
		if(velha[jogada-1][jogada2-1]!='X' && velha[jogada-1][jogada2-1]!='O')
		velha[jogada-1][jogada2-1]='X';
		else
		{
			printf("Por favor, jogue um local vazio!\n");
			(*jog)=0;
			Sleep(3000);
		}
		
	}
	else if((*jog)==2)
	{
		if(velha[jogada-1][jogada2-1]!='X' && velha[jogada-1][jogada2-1]!='O')
		velha[jogada-1][jogada2-1]='O';
		else
		{
			printf("Por favor, jogue um local vazio!\n");
			(*jog)=1;
			Sleep(3000);
		}
		
	}
	(*jog)++;
}

int deuvelha (int *soma, char velha[3][3],int *quemvenceu)
{
	//Verificação Soma de O
    			if(velha[0][0]=='O' && velha[1][0]=='O' && velha[2][0]=='O')
    			{
    				*soma = 1;
    				*quemvenceu = 2;
				}
				else if(velha[0][1]=='O' && velha[1][1]=='O' && velha[2][1]=='O')
    			{
    				*soma = 1;
    				*quemvenceu = 2;
				}
				else if(velha[0][2]=='O' && velha[1][2]=='O' && velha[2][2]=='O')
    			{
    				*soma = 1;
    				*quemvenceu = 2;
				}
				else if(velha[0][0]=='O' && velha[0][1]=='O' && velha[0][2]=='O')
    			{
    				*soma = 1;
    				*quemvenceu = 2;
				}
				else if(velha[1][0]=='O' && velha[1][1]=='O' && velha[1][2]=='O')
    			{
    				*soma = 1;
    				*quemvenceu = 2;
				}
				else if(velha[2][0]=='O' && velha[2][1]=='O' && velha[2][2]=='O')
    			{
    				*soma = 1;
    				*quemvenceu = 2;
				}
				else if(velha[0][0]=='O' && velha[1][1]=='O' && velha[2][2]=='O')
    			{
    				*soma = 1;
    				*quemvenceu = 2;
				}
				else if(velha[0][2]=='O' && velha[1][1]=='O' && velha[2][0]=='O')
    			{
    				*soma = 1;
    				*quemvenceu = 2;
				}
				
	//Verificação Soma de X
				if(velha[0][0]=='X' && velha[1][0]=='X' && velha[2][0]=='X')
    			{
    				*soma = 1;
    				*quemvenceu = 1;
				}
				else if(velha[0][1]=='X' && velha[1][1]=='X' && velha[2][1]=='X')
    			{
    				*soma = 1;
    				*quemvenceu = 1;
				}
				else if(velha[0][2]=='X' && velha[1][2]=='X' && velha[2][2]=='X')
    			{
    				*soma = 1;
    				*quemvenceu = 1;
				}
				else if(velha[0][0]=='X' && velha[0][1]=='X' && velha[0][2]=='X')
    			{
    				*soma = 1;
    				*quemvenceu = 1;
				}
				else if(velha[1][0]=='X' && velha[1][1]=='X' && velha[1][2]=='X')
    			{
    				*soma = 1;
    				*quemvenceu = 1;
				}
				else if(velha[2][0]=='X' && velha[2][1]=='X' && velha[2][2]=='X')
    			{
    				*soma = 1;
    				*quemvenceu = 1;
				}
				else if(velha[0][0]=='X' && velha[1][1]=='X' && velha[2][2]=='X')
    			{
    				*soma = 1;
    				*quemvenceu = 1;
				}
				else if(velha[0][2]=='X' && velha[1][1]=='X' && velha[2][0]=='X')
    			{
    				*soma = 1;
    				*quemvenceu = 1;
				}
		return *soma;
}

void resultado (int soma, char velha[3][3], int quemvenceu)
{
	if(soma)
	{
		printf("Parabens!! Jogador %d, voce venceu!\n", quemvenceu);
		mostrarvelha(velha);
	}
	else
	{
		printf("Deu velha!!\n");
		mostrarvelha(velha);
	}
}

int main ()
{
    char velha[3][3];
    int jog = 1;
    int teste = 0;
    int soma = 0;
    int tentativas = 1;
    int jogada, jogada2;
    int quemvenceu;
    int flagvelha = 1;
    
    zerarmatriz(velha);
    
    do{
    	
    	flagvelha = verificarvelha(velha);
    	if(flagvelha == 1)
    	{
    		break;
		}
		
		abertura();
    	mostrarvelha(velha);
    	jogadadojogador(&jog, jogada, jogada2, velha);
    	soma = deuvelha(&soma, velha, &quemvenceu);
    	tentativas++;
    	
    	system("cls");
    	
	}while(!soma);
	
	resultado(soma, velha, quemvenceu);
	
	return 0;
}
