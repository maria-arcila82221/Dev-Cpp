/*
	Name: Algoritmo número mayor
	Copyright: 
	Author: María José Arcila Cano
	Date: 27/06/22 12:24
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

float Busqueda_Mayor (float, float, float);

int main ()
{
	//Variables
		float Num_1, Num_2, Num_3, Mayor;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	cout << "Digite tres números diferentes: " << endl;
	cin >> Num_1;
	cout << endl;
	cin >> Num_2;
	cout << endl;
	cin >> Num_3;
	fflush (stdin);
	
	if ((Num_1!=Num_2) && (Num_2!=Num_3) && (Num_1!=Num_3))
	{
		Mayor = Busqueda_Mayor (Num_1, Num_2, Num_3);
		
		cout << "El número mayor es: " << Mayor << endl << endl;
	}
	else
	{
		cout << "Hay números iguales" << endl << endl;
	}
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

float Busqueda_Mayor (float N1, float N2, float N3)
{
	//Variables
		float May;
		
	system ("cls");
	
	if ((N1>N2) && (N1>N3))
	{
		May = N1;
	}
	else
	{
		if (N2>N3)
		{
			May = N2;
		}
		else
		{
			May = N3;
		}
	}
	
	system ("pause");
	
	return May;
}


























