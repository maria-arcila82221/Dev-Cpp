/*
	Name: Algoritmo nota
	Copyright: 
	Author: María José Arcila Cano
	Date: 26/06/22 18:38
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
		float Nota_1, Nota_2, Nota_3, Def;
		
	printf ("Ingrese la nota #1: ");
	scanf ("%f", &Nota_1);
	fflush (stdin);
	printf ("Ingrese la nota #2: ");
	scanf ("%f", &Nota_2);
	fflush (stdin);
	printf ("Ingrese la nota #3: ");
	scanf ("%f", &Nota_3);
	fflush (stdin);
	
	Def = (Nota_1+Nota_2+Nota_3)/3;
	
	printf ("La nota definitiva es: %f\n\n", Def);
	
	system ("pause");
	
	return 0;
}


























