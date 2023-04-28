/*
	Name: Algoritmo operacion
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

float SUMA (float, float);

int main ()
{
	//Variables
		float NumA, NumB, R;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese el primer número: ");
	scanf ("%f", &NumA);
	fflush (stdin);
	printf ("Ingrese el segundo número: ");
	scanf ("%f", &NumB);
	fflush (stdin);
	
	R = SUMA (NumA, NumB);
	
	printf ("La suma de %f ", NumA);
	printf ("y %f ", NumB);
	printf ("es: %f\n\n", R);
	
	system ("pause");
	
	return 0;
}

float SUMA (float NumAA, float NumBB)
{
	//Variable
		float R;
		
		system ("cls");
		
		R = NumAA + NumBB;
		
		system ("pause");
		
		return R;
}
