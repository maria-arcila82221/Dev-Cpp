/*
	Name: Alogoritmo calculo presupuesto
	Copyright: 
	Author: Maria Jose Arcila Cano
	Date: 26/04/22 20:35
	Description: Quinto ejercicio - Trabajo independiente DOS
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>

int main ()
{
	//Variables
	   short Ppto_2022, Ppto_P, Ppto_G, Ppto_T, Ppto_2021;
	   
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	   
	printf ("Ingrese el presupuesto del hospital en el año 2021: ");
	scanf ("%i", &Ppto_2021);
	fflush (stdin);
	
	Ppto_2022 = Ppto_2021*1.15;
	Ppto_P = Ppto_2022*0.35;
	Ppto_G = Ppto_2022*0.4;
	Ppto_T = Ppto_2022*0.25;
	
	printf ("El presupuesto del hospital para 2022 es: %i\n", Ppto_2022);
	printf ("El presupuesto para pediatría es: %i\n", Ppto_P);
	printf ("El presupuesto para ginecología es: %i\n", Ppto_G);
	printf ("El presupuesto para traumatología es: %i\n\n", Ppto_T);
	
	system ("pause");
	
	return 0;
}
