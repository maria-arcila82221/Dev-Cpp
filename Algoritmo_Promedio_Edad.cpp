/*
	Name: Algoritmo promedio edad
	Copyright: 
	Author: María José Arcila Cano
	Date: 17/06/22 21:50
	Description: 
*/

# include <iostream>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <string.h>
# include <math.h>

using namespace std;

int main ()
{
	//Variables
		int Edad, Prom, Suma_E, Cont_E;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	Suma_E = 0;
	Cont_E = 0;
	
	while (Cont_E < 20)
	{
		cout << "Ingrese la edad de la persona: ";
		cin >> Edad;
		fflush (stdin);
		
		Suma_E = Suma_E+Edad;
		Cont_E++;
	}
	
	Prom = Suma_E/Cont_E;
	
	cout << "El promedio es: " << Prom << endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

























