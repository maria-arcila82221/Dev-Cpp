/*
	Name: Algoritmo ventas dia
	Copyright: 
	Author: María José Arcila Cano
	Date: 06/07/22 10:34
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

void LLENADO (int &, int []);
void INSERTAR (int [], int &);
void PROMySUM (int &, int &, int [], int &);
int MAYOR (int [], int &);
int MENOR (int [], int &);

int main ()
{
	//Variables
		int Vr_V[500], Cant_C, Prom, Nr_M, Nr_m, Sum;
		string Resp;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	cout << "Ingrese la cantidad de clientes que entraron en el día, máximo 500: ";
	cin >> Cant_C;
	fflush (stdin);
	
	LLENADO (Cant_C, Vr_V);
	
	cout << "¿Algún otro cliente decidio hacer otra compra? ";
	getline (cin, Resp);
	fflush (stdin);
	
	if (Resp == "Si")
	{
		INSERTAR (Vr_V, Cant_C);
	}
	
	PROMySUM (Prom, Sum, Vr_V, Cant_C);
	
	Nr_M = MAYOR (Vr_V, Cant_C);
	Nr_m = MENOR (Vr_V, Cant_C);
	
	cout << "La cantidad total de ventas del día fueron: " << Cant_C << endl;
	cout << "El valor total de las ventas del día fue: " << Sum << endl;
	cout << "El promedio de ventas del día fueron: " << Prom << endl;
	cout << "La mayor venta del día fue: " << Nr_M << endl;
	cout << "La menor venta del día fue: " << Nr_m << endl << endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

void LLENADO (int &Cant, int Vr[])
{
	//Variables
		int I;
		
	for (I=0; I<Cant; I++)
	{
		cout << "Ingrese el valor de la compra: ";
		cin >> Vr[I];
		fflush (stdin);
	}
}

void INSERTAR (int Vr[], int &C)
{
	//Variables
		int Vr_C;
		string Res;
		
	Res = "Si";
	
	while (Res == "Si")
	{
		cout << "Ingresar el valor de compra a insertar: ";
		cin >> Vr_C;
		fflush (stdin);
		
		C++;
		Vr[C] = Vr_C;
		
		cout << "¿Desea ingresar otro valor de compra?: ";
		getline (cin, Res);
		fflush (stdin);
	}
}

void PROMySUM (int &Promed, int &Suma_C, int Vr[], int &Cant)
{
	//Variables
		int I;
		
	Suma_C = 0;
	
	for (I=0; I<Cant; I++)
	{
		Suma_C += Vr[I];
	}
	
	Promed = Suma_C/Cant;
}

int MAYOR (int Vr[], int &Cant)
{
	//Variables
		int NM, I;
		
	for (I=0; I<Cant; I++)
	{
		NM = 0;
		
		if (Vr[I] > NM)
		{
			NM = Vr[I];
		}
	}
	
	return NM;
}

int MENOR (int Vr[], int &Cant)
{
	//Variables
		int Nm, I;
		
	for (I=0; I<Cant; I++)
	{
		Nm = 10000000;
		
		if (Vr[I] < Nm)
		{
			Nm = Vr[I];
		}
	}
	
	return Nm;
}



































