/*
	Name: Algoritmo calculo auxilio
	Copyright: 
	Author: María José Arcila Cano
	Date: 20/06/22 12:09
	Description: 
*/

# include <iostream>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <string.h>
# include <math.h>
# include <windows.h>

using namespace std;

void CALCULO_PyC (int &, int &, int &, int &, float &, float &);
int CALCULO_B (int);

int main ()
{
	//Variables
		int Nr_C1, Nr_C2, Nr_TC, Vr_A, Prom_S;
		float Nt_1, Nt_2;
		char Pnto;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	cout << "Ingrese la nota sacada en la primer materia: ";
	cin >> Nt_1;
	fflush (stdin);
	cout << "Ingrese la nota sacada en la segunda materia: ";
	cin >> Nt_2;
	fflush (stdin);
	cout << "Ingrese la cantidad de créditos de la primer materia: ";
	cin >> Nr_C1;
	fflush (stdin);
	cout << "Ingrese la cantidad de créditos de la segunda materia: ";
	cin >> Nr_C2;
	fflush (stdin);
	
	CALCULO_PyC (Nr_C1, Nr_C2, Nr_TC, Prom_S, Nt_1, Nt_2);
	
	Pnto = CALCULO_B (Prom_S);
	
	if (Nr_TC > 4)
	{
		switch (Pnto)
		{
			case '5':	Vr_A = (Nr_TC*100000)*0.2;
			
						break;
			case '3':	Vr_A = (Nr_TC*100000)*0.1;
			
						break;
			case '2':	Vr_A = (Nr_TC*100000)*0.02;
			
						break;
		}
	}
	
	cout << "El auxilio economico que puede recibir para el proximo semestre es: " << Vr_A << endl << endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

void CALCULO_PyC (int &C1, int &C2, int &TC, int &Prom, float &N1, float &N2)
{
	system ("cls");
	
	TC = C1+C2;
	Prom = ((N1*C1)+(N2*C2))/TC;
	
	system ("pause");
}

int CALCULO_B (int Pm)
{
	//Variables
		char Punt;
		
	system ("cls");
		
	if (Pm > 4)
	{
		Punt = '5';
	}
	else
	{
		if ((Pm>3.5) && (Pm<=3))
		{
			Punt = '3';
		}
		else
		{
			if ((Pm<=3.5) && (Pm>=3))
			{
				Punt = '2';
			}
		}
	}
	
	return Punt;
}


























