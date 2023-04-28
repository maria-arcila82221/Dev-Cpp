/*
	Name: Algoritmo rentable
	Copyright: 
	Author: María José Arcila Cano
	Date: 27/06/22 08:34
	Description: 
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <math.h>
# include <string.h>

int main ()
{
	//Variables
		float Ingresos, Egresos, Balance;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("¿A cuando ascienden los ingresos de la empresa?: ");
	scanf ("%f", &Ingresos);
	fflush (stdin);
	printf ("¿A cuando ascienden los egresos de la empresa?: ");
	scanf ("%f", &Egresos);
	fflush (stdin);
	
	Balance = Ingresos-Egresos;
	
	if (Balance > 0)
	{
		printf ("Esta empresa es rentable\n");
		printf ("La empresa tuvo ganancias de: $%f\n\n", Balance);
	}
	else
	{
		Balance = (-1)*Balance;
		
		printf ("Esta empresa no es rentable\n");
		printf ("Se produjeron pérdidas de: $%f\n\n", Balance);
	}
	
	system ("pause");
	
	return 0;
}


























