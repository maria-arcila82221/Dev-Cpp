/*
	Name: Algoritmo descuento compra
	Copyright: 
	Author: Maria Jose Arcila Cano
	Date: 26/04/22 20:48
	Description:
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>

int main ()
{
	//Variables
		int V_A1, V_A2, V_A3, V_A, Total, V_D, Dcto=0;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese el valor del artículo 1: ");
	scanf ("%d", &V_A1);
	fflush (stdin);
	printf ("Ingrese el valor del artículo 2: ");
	scanf ("%d", &V_A2);
	fflush (stdin);
	printf ("Ingrese el valor del artículo 3: ");
	scanf ("%d", &V_A3);
	fflush (stdin);
	
	V_A=V_A1+V_A2+V_A3;
	
	if (V_A > 100000)
	{
		Dcto=V_A*0.05;
	}
	
	Total=V_A-Dcto;
	
	printf ("El valor total a pagar es: %d\n", Total);
	printf ("El valor descontado fue: %d\n\n", Dcto);
	
	system ("pause");
	
	return 0;
}
