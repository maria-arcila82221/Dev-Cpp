/*
	Name: Algoritmo presupuesto
	Copyright: 
	Author: María José Arcila Cano
	Date: 08/06/22 10:11
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
		int Ppto_G, Ppto_T, Ppto_P, Ppto_2021, Ppto_2022, Recaudos;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese el valor del presupuesto del 2021: ");
	scanf ("%d", &Ppto_2021);
	fflush (stdin);
	
	VALIDAR (&Ppto_2021);
	
	printf ("Ingrese el recaudo por copagos: ");
	scanf ("%d", &Recaudos);
	fflush (stdin);
	
	Ppto_2022 = CALCULO (Ppto_2021, Recaudos);
	
	if (Ppto_2022 < 5000000000)
	{
		Ppto_G = CALCULO_P (Ppto_2022, 0.4);
		Ppto_T = CALCULO_P (Ppto_2022, 0.3);
		Ppto_P = CALCULO_P (Ppto_2022, 0.3);
	}
	else
	{
		Ppto_G = CALCULO_P (Ppto_2022, 0.5);
		Ppto_T = CALCULO_P (Ppto_2022, 0.25);
		Ppto_P = CALCULO_P (Ppto_2022, 0.25);
	}
	
	printf ("El presupuesto para Ginecología es: %d\n", Ppto_G);
	printf ("El presupuesto para Traumalogía es: %d\n", Ppto_T);
	printf ("El presupuesto para Pediatría es: %d\n", Ppto_P);
	printf ("El presupuesto anual del hospital es: %d\n\n", Ppto_2022);
	
	system ("pause");
	
	return 0;
}























