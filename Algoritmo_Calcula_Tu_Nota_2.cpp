/*
	Name: Algoritmo calcula tu nota 2
	Copyright: 
	Author: Familia Arcila Cano
	Date: 25/06/22 12:15
	Description: 
*/

# include <iostream>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <string.h>
# include <math.h>
# include <windows.h>


using namespace std;

int main ()
{
	//Variables
		float Nota, Nota_P, Nota_T, Porcentaje;
		string Resp;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	Nota_T = 0;
	
	do
	{
		cout << "Ingrese la nota: ";
		cin >> Nota;
		fflush (stdin);
		
		while (!((Nota>=0) && (Nota<=5)))
		{
			cout << "Ingrese un dato válido: ";
			cin >> Nota;
			fflush (stdin);
		}
		
		cout << "Ingrese el porcentaje al cual equivale (Sin el símbolo %): ";
		cin >> Porcentaje;
		fflush (stdin);
		
			while (!((Porcentaje>=0) && (Porcentaje<=100)))
		{
			cout << "Ingrese un dato válido: ";
			cin >> Porcentaje;
			fflush (stdin);
		}
		
		Nota_P = Nota*(Porcentaje/100);
		
		Nota_T += Nota_P;
		
		cout << "¿Desea ingresar otra nota? En caso afirmativo coloque Si, de lo contrario No (Recuerde diferenciar entre mayúsculas y minúsculas: ";
		getline (cin, Resp);
		fflush (stdin);
		
		while (!((Resp=="Si")||(Resp=="No")))
		{
			cout << "Ingrese un dato válido: ";
			getline (cin, Resp);
			fflush (stdin);
		}
	}
	while (Resp == "Si");
	
	cout << "La nota de la materia es: " << Nota_T << endl << endl;
	
	cout << "^u^\n\n";
	
	system ("pause");
	
	return EXIT_SUCCESS;
}




































