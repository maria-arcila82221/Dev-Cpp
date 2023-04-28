/*
	Name: Algoritmo cálculo comisiones
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
		int Vr_SB, Vr_V1, Vr_V2, Vr_V3, Vr_C, Vr_T;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese el valor del sueldo base: ");
	scanf ("%d", &Vr_SB);
	fflush (stdin);
	printf ("Ingrese el valor de la primera venta realizada en el mes: ");
	scanf ("%d", &Vr_V1);
	fflush (stdin);
	printf ("Ingrese el valor de la segunda venta realizada en el mes: ");
	scanf ("%d", &Vr_V2);
	fflush (stdin);
	printf ("Ingrese el valor de la tercera venta realizada en el mes: ");
	scanf ("%d", &Vr_V3);
	fflush (stdin);
	
	Vr_C=(Vr_V1+Vr_V2+Vr_V3)*0.1;
	Vr_T=Vr_SB+Vr_C;
	
	printf ("El valor obtenido por concepto de comisiones por las tres ventas realizadas en el mes es %d\n", Vr_C);
	printf ("El valor total recibido en el mes es %d\n\n", Vr_T);
	
	system ("pause");
	
	return 0;
}
	
	
	
