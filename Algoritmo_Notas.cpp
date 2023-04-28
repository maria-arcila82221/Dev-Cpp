/*
	Name: Algoritmo notas modificado
	Copyright: 
	Author: Maria Jose Arcila Cano
	Date: 30/06/22 19:38
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

void LLENAR (float [], int);
void IMPRIMIR (float [], int);

int main ()
{
	//Variables
		float Notas[100];
		int Num_E;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	cout << "Ingrese el numero de estudiantes: ";
	cin >> Num_E;
	fflush (stdin);
	
	LLENAR (Notas, Num_E);
	IMPRIMIR (Notas, Num_E);

	system ("pause");
	
	return EXIT_SUCCESS;
}

void LLENAR (float Not[], int N)
{
	//Variables
		int I;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	for (I=1; I<=N; I++)
	{
		cout << "Ingrese una nota: ";
		cin >> Not[I];
		fflush (stdin);
	}
	
	system ("pause");
}

void IMPRIMIR (float Not[], int N)
{
	//Variables
		int I;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	for (I=1; I<=N; I++)
	{
		cout << Not[I] << endl;
	}
	
	system ("pause");
}
