/*
	Name: Algoritmo calculo salario
	Copyright: 
	Author: Maria Jose Arcila Cano
	Date: 26/04/22 20:15
	Description: Cuarto ejercicio - Trabajo independiente DOS
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>

int main ()
{
	//Variables
	   short V_Trab, Sal_B, Sal_N, Aportes, Rete_f;
	   float P_r, H_Trab;
	   char Nom[30], CC[15];
	   
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	   
	printf ("Ingrese nombre del empleado: ");
	gets (Nom);
	fflush (stdin);
	printf ("Ingrese cédula del empleado: ");
	gets (CC);
	fflush (stdin);
	printf ("Ingrese el total de horas trabajadas: ");
	scanf ("%f", &H_Trab);
	fflush (stdin);
	printf ("Ingrese el valor de la hora: ");
	scanf ("%i", &V_Trab);
	fflush (stdin);
	printf ("Ingrese el porcentaje de aporte a retención, sin el signo: ");
	scanf ("%f", &P_r);
	fflush (stdin);
	
	Sal_B = V_Trab*H_Trab;
	Aportes = Sal_B*0.12;
	Rete_f = (Sal_B*P_r)/100;
	Sal_N = Sal_B-Aportes-Rete_f;
	
	printf ("El empleado %s ", Nom);
	printf ("con cedula %s, ", CC);
	printf ("tuvo un salario bruto de %i ", Sal_B);
	printf ("y un salario neto de %i\n\n", Sal_N);
	
	return 0;
}






