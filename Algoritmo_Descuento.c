/*
	Name: Algoritmo descuento
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
		int Vr_C, Vr_T;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese el valor total de la compra: ");
	scanf ("%d", &Vr_C);
	fflush (stdin);
	
	Vr_T=Vr_C-(Vr_C*0.15);
	
	printf ("El valor que deberá pagar finalmente por su compra es: %d\n\n", Vr_T);
	
	system ("pause");
	
	return 0;
}
