#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Inverte(char str[50])
{
	for(int i = strlen(str)-1; i>=0; i--)
	printf("%c", str[i]);
}

int main ()
{
	char str[50];
	
	gets(str);
	
	Inverte(str);

 	return 0;
}
