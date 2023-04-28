/*
	Name: Algoritmo edad
	Copyright: 
	Author: María José Arcila Cano
	Date: 17/06/22 17:24
	Description: 
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <string.h>
# include <math.h>

int main ()
{
	//Variables
		int Edad_P, Edad_A, Edad_An, Edad_M;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese la edad de Pedro: ");
	scanf ("%d", &Edad_P);
	
	Edad_A = Edad_P*(2/3);
	Edad_An = Edad_P*(4/3);
	Edad_M = Edad_P+Edad_A+Edad_An;
	
	printf ("La edad de la mamá es: %d\n\n", Edad_M);
	
	system ("pause");
	
	return 0;
}
