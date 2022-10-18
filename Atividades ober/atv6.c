#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char str1[50], str2[50], *res;
	int tam, y = 0;
	
	gets(str1);
	fflush(stdin);
	gets(str2);
	
	tam = strlen(str1) + strlen(str2);
	
	res = malloc(tam * sizeof(char));
	
	for(int i = 0; i<strlen(str1); i++)
	{
		res[i]=str1[i];
	}
	
	for(int i = strlen(str1); i<tam; i++)
	{
		res[i]=str2[y];
		y++;
	}
	
	puts(res);

 	return 0;
}
