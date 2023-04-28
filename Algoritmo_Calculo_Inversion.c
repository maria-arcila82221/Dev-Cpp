/*
	Name: Algoritmo calculo inversion
	Copyright: 
	Author: Maria Jose Arcila Cano
	Date: 26/04/22 19:26
	Description: Segundo ejercicio - Trabajo independiente DOS
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>

int main ()
{
	//Variables
	   int DI_P1, DI_P2, DI_P3, DI;
	   float PI_P1, PI_P2, PI_P3;
	
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	   
	printf ("Ingrese el dinero invertido por la persona 1: ");
	scanf ("%d", &DI_P1);
	fflush (stdin);
	printf ("Ingrese el dinero invertido por la persona 2: ");
	scanf ("%d", &DI_P2);
	fflush (stdin);
	printf ("Ingrese el dinero invertido por la persona 3: ");
	scanf ("%d", &DI_P3);
	fflush (stdin);
	
	DI = DI_P1+DI_P2+DI_P3;
	PI_P1 = (DI_P1*100)/DI;
	PI_P2 = (DI_P2*100)/DI;
	PI_P3 = (DI_P3*100)/DI;
	
	printf ("El porcentaje de dinero invertido por la persona 1 es: %f\n", PI_P1);
	printf ("El porcentaje de dinero invertido por la persona 2 es: %f\n", PI_P2);
	printf ("El porcentaje de dinero invertido por la persona 3 es: %f\n\n", PI_P3);
	
	system ("pause");
	
	return 0;
}
