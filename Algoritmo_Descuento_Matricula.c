/*
	Name: Algoritmo descuento matricula
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
		int Cant_C, Vr_P, Vr_M, Dcto=0;
		float Nota_A;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese la nota del semestre anterior: ");
	scanf ("%f", &Nota_A);
	fflush (stdin);
	printf ("Ingrese la cantidad de créditos a cursar: ");
	scanf ("%d", &Cant_C);
	fflush (stdin);
	
	Vr_M=Cant_C*20000;
	
	if (Nota_A > 4)
	{
		Dcto=Vr_M*0.15;
	}
	
	Vr_P=Vr_M-Dcto;
	
	printf ("El valor a pagar es %d\n\n", Vr_P);
	
    system ("pause");
	
	return 0;
}
