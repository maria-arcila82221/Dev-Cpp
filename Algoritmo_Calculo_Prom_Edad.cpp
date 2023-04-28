/*
	Name: Algoritmo calculo prom edad
	Copyright: 
	Author: María José Arcila Cano
	Date: 18/06/22 08:24
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
		int Edad, Prom, Sum_E, Cont_E;
		char Preg;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	Sum_E = 0;
	Cont_E = 0;
	
	cout << "¿Desea contar la edad de una persona?. S en caso afirmativo o de lo contrario N (Recuerde diferenciar entre mayúsculas y minúsculas): ";
	cin >> Preg;
	fflush (stdin);
	
	while ((Preg != 'S') && (Preg != 'N'))
	{
			cout << "Ingrese una respuesta válida. S en caso de querer ingresar una edad, de lo contrario N; recuerde diferenciar entre mayúsculas y minúsculas: ";            
			cin >> Preg;
			fflush (stdin);
	}
	
	while (Preg == 'S')
	{
		cout << "Ingrese la edad: ";
		cin >> Edad;
		fflush (stdin);
		
		Sum_E = Sum_E+Edad;
		Cont_E++;
		
		cout << "¿Usted desea otra edad?; S en caso afirmativo o de lo contrario N (Recuerde diferenciar entre mayúsculas y minúsculas): ";
		cin >> Preg;
		fflush (stdin);
		
		while ((Preg != 'S') && (Preg != 'N'))
		{
			cout << "Ingrese una respuesta válida. S en caso de querer ingresar otra edad, de lo contrario N; recuerde diferenciar entre mayúsculas y minúsculas: ";            
			cin >> Preg;
			fflush (stdin);
		}
	}
	
	Prom = Sum_E/Cont_E;
	
	cout << "El promedio es: " << Prom << endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

























