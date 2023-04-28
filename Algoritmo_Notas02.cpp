/*
	Name: Algoritmo notas 02
	Copyright: 
	Author: María José Arcila Cano
	Date: 26/07/22 12:52
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

void LLENAR (float [], int &);
float PROMEDIO (float [], int &);

int main ()
{
	//Variables
		float Notas[100], Promed, Menor;
		int Num_N, N_E;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	Menor = 5;
	
	for (N_E=0; N_E<10; N_E++)
	{
		cout << "Ingrese la cantidad de notas del estudiante " << N_E+1 << ": ";
		cin >> Num_N;
		fflush (stdin);
		
		LLENAR (Notas, Num_N);
		
		Promed = PROMEDIO (Notas, Num_N);
		
		if (Promed < Menor)
		{
			Menor = Promed;
		}
	}
	
	cout << "El promedio menor es de: " << Menor << endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

void LLENAR (float Not[], int &N)
{
	//Variables
		int I;
		
	for (I=0; I<N; I++)
	{
		cout << "Ingrese una nota: ";
		cin >> Not[I];
		fflush (stdin);
	}
}

float PROMEDIO (float Not[], int &N)
{
	//Variables
		float Prom, Suma;
		int I;
		
	Suma = 0;
	
	for (I=0; I<N; I++)
	{
		Suma += Not[I];
	}
	
	Prom = Suma/N;
	
	return Prom;
}




































