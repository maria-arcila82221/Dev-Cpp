/*
	Name: Algoritmo calculo bonificacion
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
		int Vr_V, Nr_H, Bnf_CyG, Bnf_H, Bnf_T;
		char Est_C, Gnr_E;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese el valor total de ventas del empleado sin el simbolo de pesos: ");
	scanf ("%d", &Vr_V);
	fflush (stdin);
	printf ("Ingrese el estado civil del empleado; S(Soltero), C(Casado), V(Viudo) y O(Otro): ");
	Est_C = getc (stdin);
	fflush (stdin);
	printf ("Ingrese el género del empleado; M(Masculino) y F(Femenino): ");
	Gnr_E = getc (stdin);
	fflush (stdin);
	printf ("Ingrese el número de hijos que tiene el empleado, si no tiene colocar 0: ");
	scanf ("%d", &Nr_H);
	fflush (stdin);
	
	switch (Gnr_E)
	{
		case 'M': if (Est_C = 'S')
				  {
				  	Bnf_CyG=Vr_V*0.05;
				  }
				  else
				  {
				  	if (Est_C = 'C')
				  	{
				  		Bnf_CyG=Vr_V*0.07;
					}
					else
					{
						if (Est_C = 'V')
						{
							Bnf_CyG=Vr_V*0.09;
						}
						else
						{
							if (Est_C = 'O')
							{
							Bnf_CyG=Vr_V*0.02;
							}
						}
					}
				  }
				  
				  break;
				  
		case 'F': if (Est_C = 'S')
				  {
				  	Bnf_CyG=Vr_V*0.06;
				  }
				  else
				  {
				  	if (Est_C = 'C')
				  	{
				  		Bnf_CyG=Vr_V*0.08;
					}
					else
					{
						if (Est_C = 'V')
						{
							Bnf_CyG=Vr_V*0.1;
						}
						else
						{
							if (Est_C = 'O')
							{
								Bnf_CyG=Vr_V*0.03;
							}
						}
					}
				  }
				  
				  break;
	}
	
	if (Nr_H>=3)
	{
		Bnf_H=Bnf_CyG*0.35;
	}
	else
	{
		Bnf_H=Bnf_CyG*0;
	}
	
	Bnf_T=Bnf_CyG+Bnf_H;
	
	printf ("La bonificación total del empleado es: %d\n\n", Bnf_T);
	
	system ("pause");
	
	return 0;
	
}
