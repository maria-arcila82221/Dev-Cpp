/*
	Name: Algoritmo calculo utilidad
	Copyright: 
	Author: Maria Jose Arcila Cano
	Date: 26/04/22 19:58
	Description: Tercer ejercicio - Trabajo independiente DOS
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>

int main ()
{
	//Variables
	   short Vr_P, Vr_a_I, Vr_Venta, Utilidad;
	   float Iva, Por_I;
	   
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	   
	printf ("Ingrese el valor inicial del producto: ");
	scanf ("%i", &Vr_P);
	fflush (stdin);
	printf ("Ingrese el porcentaje del Iva: ");
	scanf ("%f", &Por_I);
	fflush (stdin);
	
	Utilidad = Vr_P*0.07;
	Vr_a_I = Vr_P+Utilidad;
	Iva = Vr_a_I*Por_I;
	Vr_Venta = Vr_a_I+Iva;
	
	printf ("El valor de venta es: %i\n\n", Vr_Venta);
	
	return 0;
}
