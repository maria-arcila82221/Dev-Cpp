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
		int DI, DG;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese la cantidad de dinero invertido en el banco: ");
	scanf ("%d", &DI);
	fflush (stdin);
	
	DG=(0.02*DI)/100;
	
	printf ("La cantidad de dinero ganado después de un mes fue: %d\n\n", DG);
	
	system ("pause");
	
	return 0;
}
