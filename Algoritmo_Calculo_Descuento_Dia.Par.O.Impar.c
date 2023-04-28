/*
	Name: Algoritmo_Calculo_Descuento_Dia.Par.O.Impar
	Copyright: 
	Author: 
	Date: 25/06/22 15:31
	Description: 
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <math.h>
# include <string.h>

int main ()
{
	//Variables
		int Nr_D, Vr_C, Vr_Cd, Vr_IVA, Vr_sinIVA;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese el número del día en que ha realizado la compra: ");
	scanf ("%d", &Nr_D);
	fflush (stdin);
	printf ("Ingrese el valor de la compra: ");
	scanf ("%d", &Vr_C);
	fflush (stdin);
	
	Vr_IVA = Vr_C*0.19;
	Vr_sinIVA = Vr_C-Vr_IVA;
	
	if ((Nr_D%2)==0)
	{
		Vr_Cd = Vr_sinIVA-(Vr_sinIVA*0.07);
	}
	else
	{
		Vr_Cd = Vr_sinIVA-(Vr_sinIVA*0.07);
	}
	
	printf ("El valor total de su compra es: %d\n\n", Vr_Cd);
	
	system ("pause");
	
	return 0;
}


























