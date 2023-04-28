/*
	Name: Algoritmo notas con promedio
	Copyright: 
	Author: María José Arcila Cano
	Date: 30/06/22 23:59
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
float PROMEDIO (float [], int);

int main ()
{
	//Variables
		float Notas[100], Promed;
		int Num_E;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	cout << "Ingrese el numero de estudiantes: ";
	cin >> Num_E;
	fflush (stdin);
	
	LLENAR (Notas, Num_E);
	IMPRIMIR (Notas, Num_E);
	
	Promed = PROMEDIO (Notas, Num_E);
	
	cout << "El promedio de notas es: " << Promed << endl;
	
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
		cout << Not[I];
	}
	
	system ("pause");
}

float PROMEDIO (float Not[], int N)
{
	//Variables
		float Prom, Suma;
		int I;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	Suma = 0;
	
	for (I=1; I<=N; I++)
	{
		Suma = Suma+Not[I];
	}
	
	Prom = Suma/N;
	
	system ("pause");
	
	return Prom;
}




































