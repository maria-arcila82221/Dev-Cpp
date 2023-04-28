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

void SUMA_RESTA (float, float, float *, float *);

int main ()
{
	//Variables
		float NumA, NumB, Rs, Rr;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese el primer número: ");
	scanf ("%f", &NumA);
	fflush (stdin);
	printf ("Ingrese el segundo número: ");
	scanf ("%f", &NumB);
	fflush (stdin);
	
	SUMA_RESTA (NumA, NumB, &Rs, &Rr);
	
	printf ("La suma de: %f ", NumA);
	printf ("y %f, ", NumB);
	printf ("es: %f\n", Rs);
//////////////////////////////////////
	printf ("La resta de: %f ", NumA);
	printf ("y %f, ", NumB);
	printf ("es: %f\n\n", Rr);
	
	system ("pause");
	
}

void SUMA_RESTA (float NumAA, float NumBB, float *R_s, float *R_r)
{
	system ("cls");
	
	*R_s = NumAA + NumBB;
	*R_r = NumAA - NumBB;
	
	system ("pause");
	
}
