#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int **mat ;
	int i, j, LIN, COL;

		scanf("%d",&LIN);
		scanf("%d",&COL);
		
		mat = malloc (LIN * sizeof (int*)) ;
		
		for (i=0; i < LIN; i++)
   		mat[i] = malloc (COL * sizeof (int)) ;
   		
   		srand(time(NULL));

		for (i=0; i < LIN; i++)
   			for (j=0; j < COL; j++)
      			mat[i][j] = rand() % 100; 
				  
		for (i=0; i < LIN; i++)
   		{
   			for(j=0; j<COL; j++)
   			{
   				printf("%d ",mat[i][j]);
			}
			printf("\n");
		}	
			   
		for (i=0; i < LIN; i++)
   		free (mat[i]) ;
		free (mat) ;

 	return 0;
}
