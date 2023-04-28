/*
	Name: Algoritmo auxilio
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

void CALCULO_PROMEDIO (float*, int*);
int CALCULO_PUNTOS (float);

int main ()
{
	//Variables
		float Prom;
		int Vr_Aux, Tot_Cr, Puntos, Vr_Cr;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	CALCULO_PROMEDIO (&Prom, &Tot_Cr);
	
	Puntos = CALCULO_PUNTOS (Prom);
	Vr_Cr = Tot_Cr*100000;
	
	if (Tot_Cr > 4)
	{
		switch (Puntos)
		{
			case 5: Vr_Aux = Vr_Cr*0.2;
			
					break;
			case 3:	Vr_Aux = Vr_Cr*0.1;
			
					break;
			case 2:	Vr_Aux = Vr_Cr*0.02;
			
					break;
		}
	}
	
	printf ("El valor del auxilio es de: %d\n\n", Vr_Aux);
	
	//system ("pause");
	
	return 0;
}

void CALCULO_PROMEDIO (float *Prm, int *T_c)
{
	//Variables
		float Nota_1, Nota_2;
		int Cred_1, Cred_2;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese la nota de la asignatura 1: ");
	scanf ("%f", &Nota_1);
	fflush (stdin);
	printf ("Ingrese la cantidad de créditos: ");
	scanf ("%d", &Cred_1);
	fflush (stdin);
	printf ("Ingrese la nota de la asignatura 2: ");
	scanf ("%f", &Nota_2);
	fflush (stdin);
	printf ("Ingrese la cantidad de créditos: ");
	scanf ("%d", &Cred_2);
	fflush (stdin);
	
	*T_c = Cred_1 + Cred_2;
	*Prm = ((Nota_1*Cred_1)+(Nota_2*Cred_2))/(*T_c);
	
	//system ("pause");
}

int CALCULO_PUNTOS (float Pr)
{
	//Variables
		int Punt;
		
	system ("cls");
		
	if (Pr > 4)
	{
		Punt = 5;
	}
	else
	{
		if ((Pr > 3.5) && (Pr <= 4))
		{
			Punt = 3;
		}
		else
		{
			if ((Pr <= 3) && (Pr >= 3))
			{
				Punt = 2;
			}
		}
	}
	
	//system ("pause");
	
	return Punt;
}

































