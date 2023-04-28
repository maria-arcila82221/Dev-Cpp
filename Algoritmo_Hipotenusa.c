/*
	Name: Algoritmo_Hipotenusa
	Copyright: 
	Author: David Ospina Pérez, Santiago Espinal García, María José Arcila Cano
	Date: 06/05/22 16:27
	Description: 
*/
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <locale.h>
# include <wchar.h>

int main ()
{
	//Variables
		float cat_1, cat_2, h;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese el valor del cateto 1: ");
	scanf ("%f", &cat_1);
	fflush (stdin);
	printf ("Ingrese el valor del cateto 2: ");
	scanf ("%f", &cat_2);
	fflush (stdin);
	
	h=sqrt(pow(cat_1, 2)+pow(cat_2, 2));
	
	printf ("El valor de la hipotenusa es: %f\n\n", h);
	
	system ("pause");
	
	return 0;
}
