/*
	Name: Algoritmo cálculo promedio estudiantes
	Copyright: 
	Author: María José Arcila Cano
	Date: 19/06/22 19:20
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
		int Cont_E, Cont_Mat, Suma_Mat;
		float Not, Prom;
		char Preg;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	Cont_E = 0;
	
	while (Cont_E < 20)
	{
		Suma_Mat = 0;
		Cont_Mat = 0;
		Preg = 'S';
		
		while (Preg == 'S')
		{
			cout << "Ingrese la nota sacada en la materia " << Cont_Mat+1 << ": ";
			cin >> Not;
			
			Suma_Mat = Suma_Mat+Not;
			Cont_Mat = Cont_Mat+1;
			
			cout << "Responda S sí tiene otra materia, N en caso contrario (Recuerde diferenciar entre mayúsculas y minúsculas): ";
			cin >> Preg;
		}
		
		Prom = Suma_Mat/Cont_Mat;
		Cont_E = Cont_E+1;
		
		cout << "La nota promedio es: " << Prom << endl;
	}
}


























