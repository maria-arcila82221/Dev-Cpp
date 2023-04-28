/*
	Name: Algoritmo promedio edades
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
		int Edad, Prom, Suma, Cont;
		char Resp;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	Suma = 0;

	for ((Cont=1); (Cont<=3); (Cont++))
	{
		cout << "Ingrese la edad de la persona: ";
		cin >> Edad;
		fflush (stdin);
		
		Suma += Edad;	
	}
	
	Prom = Suma/Cont;
	
	cout << "El promedio es: " << Prom << endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

























