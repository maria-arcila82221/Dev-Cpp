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
		short Cant_C;
		int Vr_Pagar, Dcto, Vr_Sin_D;
		char Estrato;
	
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese la cantidad de créditos a cursar: ");
	scanf ("%i", &Cant_C);
	fflush (stdin);
	printf ("Ingrese el estrato: ");
	Estrato = getc (stdin);
	fflush (stdin);
	
	Vr_Sin_D=Cant_C*25000;
	
	switch (Estrato)
	{
		case '1': 	Dcto=Vr_Sin_D*0.4;
		
					break;
					
		case '2': 	Dcto=Vr_Sin_D*0.35;
		
					break;
					
		case '3': 	Dcto=Vr_Sin_D*0.3;
		
					break;
					
		case '4': 	Dcto=Vr_Sin_D*0.25;
		
					break;
					
		case '5':
		case '6': 	Dcto=Vr_Sin_D*0.2;
		
					break;
		
		default : 	Dcto=0;
		
					break;
					
	}
	
	Vr_Pagar=Vr_Sin_D-Dcto;
	
	printf ("El valor a pagar es: %d\n", Vr_Pagar);
	printf ("Tuvo un descuento del: %d\n\n", Dcto);
	
	system ("pause");
	
	return 0;
}
