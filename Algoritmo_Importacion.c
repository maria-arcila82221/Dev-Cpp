/*
	Name: Algoritmo importacion
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
	   float Vr_B, Por_U, Vr_D, Vr_U;
	   int Cant_Bul, aranceles, iva, Vr_V, Total, Pr_V, fletes;
	   
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	   
	printf ("Ingrese la cantidad de bultos: ");
	scanf ("%d", &Cant_Bul);
	fflush (stdin);
	printf ("Ingrese el valor del bulto de papa: ");
	scanf ("%f", &Vr_B);
	fflush (stdin);
	printf ("Ingrese el valor del dólar: ");
	scanf ("%f", &Vr_D);
	fflush (stdin);
	printf ("Ingrese la utilidad a obtener: ");
	scanf ("%f", &Por_U);
	fflush (stdin);
	
	Vr_V = Vr_B*Cant_Bul;
	fletes = Vr_V*0.1;
	aranceles = Vr_V*0.05;
	Total = (Vr_V+fletes+aranceles)*Vr_D;
	iva = Total*0.19;
	Vr_U = (Total+iva)*Por_U;
	Pr_V = (Total+iva+Vr_U)/Cant_Bul+25.5;
	
	printf ("El total del costo fue: %d\n", Total);
	printf ("El precio de venta del kilo de papa fue: %d\n\n", Pr_V);
	
	system ("pause");
	
	return 0;
}
