/*
	Name: Algoritmo novia
	Copyright: 
	Author: María José Arcila Cano
	Date: 18/07/22 17:12
	Description: 
*/

# include <iostream>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <math.h>
# include <string.h>
# include <windows.h>

using namespace std;

void LLENADO (int [], int &);
void MENOR (int [], int &, int &, int &, bool &);

int main ()
{
	//Variables
		int Edad_C[100], Edad_m, Cand, Ind;
		bool Prueba;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	cout << "Ingrese la cantidad de candidatas que encontró en Tinder: ";
	cin >> Cand;
	fflush (stdin);
	
	LLENADO (Edad_C, Cand);
	MENOR (Edad_C, Cand, Edad_m, Ind, Prueba);
	
	if (Prueba == true)
	{
		cout << "Juan quedese soltero" << endl << endl;
	}
	
	if (Prueba == false)
	{
		cout << "La candidata ganadora fue la que se encuentra en la posición: " << Ind << ", con una edad de: " << Edad_m << endl << endl;
	}
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

void LLENADO (int EC[], int &C)
{
	//Variables
		int I;
		
	for (I=0; I<C; I++)
	{
		cout << "Ingrese la edad de la candidata #" << I+1 << ": ";
		cin >> EC[I];
		fflush (stdin);
	}
}

void MENOR (int EC[], int &C, int &Em, int &K, bool &Pru)
{
	//Variables
		int I;
		
	Em = 100;
		
	for (I=0; I<C; I++)
	{
		if (EC[I] < Em)
		{
			Em = EC[I];
			K = I;
			Pru = false;	
		}
		else
		{
			if (EC[I] == Em)
			{
				Pru = true;
			}
		}
	}
}




































