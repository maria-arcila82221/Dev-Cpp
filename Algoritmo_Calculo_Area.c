/*
	Name: Algoritmo calculo area
	Copyright: 
	Author: María José Arcila Cano
	Date: 17/06/22 16:18
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
		float R, Area;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingresa el radio del circulo: ");
	scanf ("%f", &R);
	fflush (stdin);
	
	Area = 3.1416*(pow(R, 2));
	
	printf ("El area del circulo es: %f\n\n", Area);
	
	system ("pause");
	
	return 0;
	
}









