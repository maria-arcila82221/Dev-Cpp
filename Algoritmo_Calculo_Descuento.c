/*
	Name: Algoritmo calculo descuento
	Copyright: 
	Author: María José Arcila Cano
	Date: 25/06/22 14:50
	Description: 
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <string.h>

int main ()
{
	//Variables
		int Cant_D, Vr_Tp, Vr_T, Vr_P;
		float Dcto_T, Dcto, Cant_P;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese la cantidad de kilos de papa a comprar: ");
	scanf ("%f", &Cant_P);
	fflush (stdin);
	printf ("Ingrese el valor del kilo de papa: ");
	scanf ("%d", &Vr_P);
	fflush (stdin);
	printf ("Ingrese la cantidad de desodorantes: ");
	scanf ("%d", &Cant_D);
	fflush (stdin);
	printf ("Ingrese el descuento a aplicar (Sin el símbolo %): ");
	scanf ("%f", &Dcto);
	fflush (stdin);
	
	Vr_Tp = Cant_P*Vr_P;
	Vr_T = Vr_Tp+Cant_D*3000;
	Dcto_T = Vr_T*Dcto/100;
	
	printf ("El precio total a pagar es: %d\n", Vr_T);
	printf ("Se le desconto del total: %f\n\n", Dcto_T);
	
	system ("pause");
	
	return 0;
}




































