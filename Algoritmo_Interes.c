/*
	Name: Algoritmo interés
	Copyright: 
	Author: María José Arcila Cano
	Date: 27/06/22 08:08
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
		float P_Int, Cap, Int, Nuevo_S;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese el capital depositado: ");
	scanf ("%f", &Cap);
	fflush (stdin);
	printf ("Ingrese el porcentaje de interés sin el signo %: ");
	scanf ("%f", &P_Int);
	fflush (stdin);
	
	Int = (Cap*P_Int)/100;
	
	if (Int > 7000)
	{
		Nuevo_S = Cap+Int;
	}
	
	printf ("El nuevo saldo del CDT será de: %f\n\n", Nuevo_S);
	
	system ("pause");
	
	return 0;
}


























