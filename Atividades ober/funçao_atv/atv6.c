#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void VerificaMaior(char str1[50], char str2[50])
{
	int s1, s2;
	
	s1 = strlen(str1);
	s2 = strlen(str2);
	
	if(s1>s2)
	{
		printf("String 1 maior");
	}
	else if(s2>s1)
	{
		printf("String 2 maior");
	}
	else
	{
		printf("A duas sao iguais");
	}	
}

int main ()
{
	char str1[50], str2[50];
	
	gets(str1);
	fflush(stdin);
	gets(str2);
	
	VerificaMaior(str1, str2);


 	return 0;
}
