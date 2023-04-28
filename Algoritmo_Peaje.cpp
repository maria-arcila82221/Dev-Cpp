/*
	Name: Algoritmo peaje
	Copyright: 
	Author: María José Arcila Cano
	Date: 20/06/22 08:49
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
		int Tot_P, Tot_SP, Tot_C, Tot_D;
		float Hora;
		char tipo;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	Tot_P = 0;
	Tot_SP = 0;
	Tot_C = 0;
	Tot_D = 0;
	
	cout << "Ingrese la hora: ";
	cin >> Hora;
	
	while ((Hora>=6) && (Hora<=18))
	{
		do
		{
			cout << "Ingrese tipo de vehículo: ";
			cin >> tipo;
		}
		while ((tipo != '1') && (tipo != '2') && (tipo != '3'));
		
		switch (tipo)
		{
			case '1':	Tot_P = Tot_P+1;
						Tot_D = Tot_D+18000;
						
						break;
			case '2':	Tot_SP = Tot_SP+1;
						Tot_D = Tot_D+30000;
			
						break;
			case '3':	Tot_C = Tot_C+1;
						Tot_D = Tot_D+40000;
			
						break;
		}
		
		cout << "Ingrese la hora: ";
		cin >> Hora;
		fflush (stdin);
	}
	
	cout << "El total de autos particulares o que pasaron es: " << Tot_P << endl << "El total de servicio público es: " << Tot_SP << ", y el total de carga es: " << Tot_C << endl; 
	cout << "Se recolectaron: " << Tot_D << endl << endl; 
	
	system ("pause");
	
	return EXIT_SUCCESS;                                                                                                                                                                
}


























