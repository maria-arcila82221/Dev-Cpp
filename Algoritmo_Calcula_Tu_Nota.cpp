/*
	Name: Algoritmo calcula tu nota
	Copyright: 
	Author: Familia Arcila Cano
	Date: 24/06/22 17:41
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
		float Nota_A, Nota_E, Nota_S, Nota_SPr, Cont_NS, Suma_NS, Nota_PS, Nota_P;
		string Resp;;
	
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	cout << "Ingrese la nota de la autoevaluación: ";
	cin >> Nota_A;
	fflush (stdin);
	
	while (!((Nota_A>=0) && (Nota_A<=5)))
	{
		cout << "Ingrese un dato válido: ";
		cin >> Nota_A;
		fflush (stdin);
	}
	
	cout << "Ingrese la nota de la evaluación de período: ";
	cin >> Nota_E;
	fflush (stdin);
	
	while (!((Nota_E>=0) && (Nota_E<=5)))
	{
		cout << "Ingrese un dato válido: ";
		cin >> Nota_E;
		fflush (stdin);
	}
	
	Cont_NS = 0;
	Suma_NS = 0;
	
	do
	{
		cout << "Ingrese la nota de seguimiento #" << Cont_NS+1 << ": ";
		cin >> Nota_S;
		fflush (stdin);
		
			while (!((Nota_S>=0) && (Nota_S<=5)))
			{
				cout << "Ingrese un dato válido: ";
				cin >> Nota_S;
				fflush (stdin);
			}
		
		Suma_NS += Nota_S;
		Cont_NS++;
		
		cout << "¿Desea ingresar otra nota del seguimiento? En caso afirmativo escriba Si, de lo contrario No. Recuerde diferenciar entre mayúsculas y minúsculas, además del uso de una correcta ortografía: ";                                                                                                                                                                 
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
	
	Nota_PS = Suma_NS/Cont_NS;
	Nota_P = (Nota_A*0.1)+(Nota_E*0.2)+(Nota_PS*0.7);
	
	cout << "La nota promedio de la materia es: " << Nota_P << endl << endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
}






































