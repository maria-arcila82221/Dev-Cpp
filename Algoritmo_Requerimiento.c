/*
	Name: Algoritmo requerimiento
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
		int S_E1, S_E2, Vr_T1, Vr_T2, Vr_S1, Vr_S2, Vr_H=10500;
		float H_E1, H_E2, A_E1, A_E2;
		char N_E1[50], N_E2[50];
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese el nombre del primer empleado: ");
	gets (N_E1);
	fflush (stdin);
	printf ("Ingrese el nombre del segundo empleado: ");
	gets (N_E2);
	fflush (stdin);
	printf ("Ingrese la cantidad de años laborados por el primer empleado: ");
	scanf ("%f", &A_E1);
	fflush (stdin);
	printf ("Ingrese la cantidad de años laborados por el segundo empleado: ");
	scanf ("%f", &A_E2);
	fflush (stdin);
	printf ("Ingrese la cantidad de horas trabajadas por el primer empleado: ");
	scanf ("%f", &H_E1);
	fflush (stdin);
	printf ("Ingrese la cantidad de horas trabajadas por el segundo empleado: ");
	scanf ("%f", &H_E2);
	fflush (stdin);
	
	if (A_E1 > A_E2)
	{
		S_E1=H_E1*Vr_H;
		Vr_S1=(S_E1*0.015)*A_E1;
		Vr_T1=S_E1+Vr_S1;
		
		printf ("El nombre del empleado beneficiado del subsidio es: %s\n", N_E1);
		printf ("El valor total recibido por concepto de salario más subsidio es: %d\n", Vr_T1);
		printf ("El valor del subsidio es: %d\n\n", Vr_S1);
	}
	
	if (A_E1 < A_E2)
	{
		S_E2=H_E2*Vr_H;
		Vr_S2=(S_E2*0.015)*A_E2;
		Vr_T2=S_E2+Vr_S2;
		
		printf ("El nombre del empleado beneficiado del subsidio es: %s\n", N_E2);
		printf ("El valor total recibido por concepto de salario más subsidio es: %d\n", Vr_T2);
		printf ("El valor del subsidio es: %d\n\n", Vr_S2);
	}
	
	system ("pause");
	
	return 0;
}
