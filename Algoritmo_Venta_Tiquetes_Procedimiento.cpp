/*
	Name: Algoritmo venta tiquetes
	Copyright: 
	Author: María José Arcila Cano
	Date: 22/06/22 10:03
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

void COMPRAS (int &, int &);

int main ()
{
	//Variables
		int Comp_My, Vr_Pagar, Ced, Ced_My, Cant, Cant_My, Vr_Compra;
		float Hora;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	Comp_My = 0;
	Ced_My = 0;
	Cant_My = 0;
	
	cout << "Ingrese la hora: ";
	cin >> Hora;
	fflush (stdin);
	
	while ((Hora>=10)&&(Hora<=14))
	{
		cout << "Ingrese la cédula del comprador: ";
		cin >> Ced;
		fflush (stdin);
		
		COMPRAS (Vr_Compra, Cant);
		
		if (Vr_Compra > Comp_My)
		{
			Comp_My = Vr_Compra;
			Ced_My = Ced;
			Cant_My = Cant;
		}
		
		cout << "Ingrese la hora: ";
		cin >> Hora;
		fflush (stdin);
	}
	
	Vr_Pagar = Comp_My*0.55;
	
	cout << "El cliente con cédula: " << Ced_My << ", compro: " << Cant_My << " tiquetes, y tienen un costo de: " << Vr_Pagar << endl << endl;	
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

void COMPRAS (int &Vr_C, int &N)
{
	//Variables
		int Cont, Mes;
		float Vr_D;
		
	Vr_C = 0;
	
	cout << "Ingrese la cantidad de tiquetes a comprar: ";
	cin >> N;
	fflush (stdin);
	
	for (Cont=0; Cont<N; Cont++)
	{
		cout << "Ingrese el valor del dólar: ";
		cin >> Vr_D;
		fflush (stdin);
		cout << "Ingrese el número del mes en que desea viajar: ";
		cin >> Mes;
		fflush (stdin);
		
		switch (Mes)
		{
			case 1:
			case 3:
			case 4:
			case 6:
			case 12:	Vr_C = Vr_C+305*Vr_D;
						
						break;
			case 2:
			case 5:
			case 9:
			case 10: 	Vr_C = Vr_C+270*Vr_D;
			
						break;
			case 7:
			case 8:
			case 11:	Vr_C = Vr_C+293*Vr_D;
					
						break;	
		}
	}
	
	system ("pause");
}



































