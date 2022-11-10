#include <stdio.h>
#include <stdlib.h>

struct data
{
	int dia;
	int mes;
	int ano;
};

void datecpy(struct data *dt1, struct data *dt2)
{
	dt1->dia=dt2->dia;	
	dt1->mes=dt2->mes;
	dt1->ano=dt2->ano;
}

int main ()
{
	struct data da={1,5,1999}, db={15,8,1980};
	
	datecpy(&da, &db);
	
	printf("%d\n", da.dia);
	printf("%d\n", da.mes);
	printf("%d", da.ano);

 	return 0;
}
