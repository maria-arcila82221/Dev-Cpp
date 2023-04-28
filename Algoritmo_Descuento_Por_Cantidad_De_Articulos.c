/*
	Name: Algoritmo descuento por cantidad de articulos
	Copyright: 
	Author: Maria Jose Arcila Cano
	Date: 17/06/22 16:51
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
		int Valor, Vr_P;
		float Cant, Dcto;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese la cantidad de artículos a comprar: ");
	scanf ("%f", &Cant);
	fflush (stdin);
	printf ("Ingrese el precio en el que se encuentran los artículos: ");
	scanf ("%d", &Valor);
	fflush (stdin);
	
	Dcto = Cant*Valor*0.15;
	Vr_P = Cant*Valor-Dcto;
	
	printf ("El valor total a pagar es: %d\n\n", Vr_P);
	
	system ("pause");
	
	return 0;
}


















