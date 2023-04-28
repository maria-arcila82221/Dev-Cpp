/*
	Name: Algoritmo cálculo masa
	Copyright: 
	Author: María José Arcila Cano
	Date: 26/04/22 18:41
	Description: Primer ejercicio - Trabajo independiente DOS
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>

int main ()
{
	//Variables
	   float Pre, Vol, Tem, Mas;
	   
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	   
	printf ("Ingrese el valor de la presi�n: ");
	scanf ("%f", &Pre);
	fflush (stdin);
	printf ("Ingrese el valor del volumen: ");
	scanf ("%f", &Vol);
	fflush (stdin);
	printf ("Ingrese el valor de la temperatura: ");
	scanf ("%f", &Tem);
	fflush (stdin);
	
	Mas = (Pre*Vol)/(0.37*Tem+460);
	
	printf ("El valor de la masa es: %f\n\n", Mas);
	
	system ("pause");
	
	return 0;
}
