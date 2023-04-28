/*
	Name: Algoritmo promedio
	Copyright: 
	Author: María José Arcila Cano
	Date: 19/06/22 22:04
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
		short Edad, Cont, Suma, Prom;
		
	Cont = 0;
	Suma = 0;
	
	while (Cont < 15)
	{
		cout << "Ingrese la edad: ";
		cin >> Edad;
		fflush (stdin);
		
		Suma += Edad;
		Cont++;
	}
	
	Prom = Suma/Cont;
	
	cout << "El promedio de edades es: " << Prom << endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
}


























