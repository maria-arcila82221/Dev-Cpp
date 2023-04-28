/*
	Name: Algoritmo operaciones
	Copyright: 
	Author: Maria Jose Arcila Cano
	Date: 26/04/22 20:48
	Description:
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <string.h>

void SUMA_RESTA ();

int main ()
{
	//Variables
		float N1, N2, Rs, Rr;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese el primer número: ");
	scanf ("%f", &N1);
	fflush (stdin);
	printf ("Ingrese el segundo número: ");
	scanf ("%f", &N2);
	fflush (stdin);
	
	Rs = N1+N2;
	Rr = N1-N2;
	
	printf ("La suma de %f ", N1);
	printf ("y %f ", N2);
	printf ("es: %f\n", Rs);
	printf ("La resta de %f ", N1);
	printf ("y %f ", N2);
	printf ("es: %f\n\n", Rr);
	
	system ("pause");
		
}

void SUMA_RESTA ()
{
	
	system ("cls");
	
	SUMA_RESTA ();
	
	system ("pause");
	
}
