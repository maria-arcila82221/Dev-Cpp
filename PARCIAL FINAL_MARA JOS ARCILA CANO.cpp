/*
	Name: 
	Copyright: 
	Author: María José Arcila
	Date: 27/07/22 10:02
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

int main ()
{
	//Variables
		char Res_M;
		int Ced[100], Ced_PG[100], Ced_PA[100], Ced_MG, Ced_MA, Ced_mG, Ced_mA;
		float PP_Admin[100], PP_Fin[100], PP_Tec[100], Sum_P[100];
		short Num_P;
		
	setlocale (LC_ALL, "Spanish");
	
	cout << endl << endl << "Menú" << endl << endl;
	cout << "1. Captura de información" << endl;
	cout << "2. Procesar información" << endl;
	cout << "3. Listado de aspirantes a cargos de Gerente" << endl;
	cout << "4. Listado de aspirantes a cargos de Administrador" << endl;
	cout << "5. Estadísticas" << endl;
	cout << "6. Terminar" << endl;
	cout << "R/ "; cin >> Res_M;
	fflush (stdin);
	cout << endl;
	
	switch (Res_M)
	{
		case '1':	cout << "Ingrese el número de peronas de las cuales almacenará los datos (Máximo 100): ";
					cin >> Num_P;
					fflush (stdin);
					
					CAPTURA (Num_P, Ced, PP_Admin, PP_Fin, PP_Tec, Sum_P);
					
					break;
					
		case '2':	 PROCESAR (
		
					break;
					
		case '3':	ORDEN_A (Num_P, Ced_PG);
					LISTADO (Num_P, Ced_PG);
					
					break;
					
		case '4':	ORDEN_D (Num_P, Ced_PA);
					LISTADO (Num_P, Ced_PA);
					
					break;
					
		case '5':	Ced_MG = CEDULA_M (Num_P, Ced_PG, );
		
					cout << "La cédula del aspirante con mayor puntaje para el cargo de gerente es: " << Ced_MG << endl;
					
					Ced_MA = 
					
					cout << "La cédula del aspirante con mayor puntaje para el cargo de administrador: " << 
					cout << "Cédula del aspirante con menor puntaje para el cargo de gerente: " <<
					cout << "Cédula del aspirante con menor puntaje para el cargo de administrador: " <<
					cout <<  << " personas pueden aspirar al cargo de gerente" << endl;
					cout <<  << " personas pueden aspirar al cargo de administrador" << endl << endl;
	}
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

void CAPTURA (short &NP, int C[], float PA[], float PF[], float PT[], float SP[])
{
	//Variables
		short I;
			
	for (I=0; I<NP; I++)
	{
		SP = 0;
		
		cout << "Ingrese la cédula del aspirante #" << I+1 << ": ";
		cin >> C[I];
		fflush (stdin);
		cout << "Ingrese el puntaje obtenido en prueba de conocimientos administrativos: ";
		cin >> PA[I];
		fflush (stdin);
		cout << "Ingrese el puntaje obtenido en la prueba de conocimientos financieros: ";
		cin >> PF[I];
		fflush (stdin);
		cout << "Ingrese el puntaje obtenido en la prueba de conocimientos técnicos: ";
		cin >> PT[I];
		fflush (stdin);
		
		SP[I] = PA[I]+PF[I]+PT[I];
	}
}

void PROCESAR (short &NP, int C[], float PA[], float PF[], float PT[], float SP[], int CG[], int CA[], float PG[], float PA[])
{
	//Variables
		short I;
	
	for (I=0; I<NP; I++)
	{
		if (SP[I] > 400)
		{
			CG[I] = C[I];
			PG[I] = SP[I];
		}
		else
		{
			if ((SP[I]>301) && (SP[I]<=400))
			{
				CA[I] = C[I];
				PA[I] = SP[I];
			}
		}
	}
}

void ORDEN_A (short &NP, int VC[])
{
	//Variables
		short I, J;
		int Aux;
		
	for (I=0; I<(NP-1); I++)
	{
		for (J=0; J<(NP-1); J++)
		{
			if (VC[J] > VC[J+1])
			{
				Aux = VC[J];
				VC[J] = VC[J+1];
				VC[J+1] = Aux;
			}
		}
	}
}

void ORDEN_D (short &NP, int VC[])
{
	//Variables
		short I, J;
		int Aux;
		
	for (I=0; I<(NP-1); I++)
	{
		for (J=0; J<(NP-1); J++)
		{
			if (VC[J] < VC[J+1])
			{
				Aux = VC[J];
				VC[J] = VC[J+1];
				VC[J+1] = Aux;
			}
		}
	}
}

void LISTADO (short &NP, int VC[])
{
	//Variables
		short I;
		
	for (I=0; I<NP; I++)
	{
		cout << VC[I] << endl << endl;
	}
}

int CEDULA_M (short &NP, int VC[], float VP[])
{
	//Variables
		short I;
		float MP;
		int CMP;
		
	MP = 0;
		
	for (I=0; I<NP; I++)
	{
		if (VP[I] > MP)
		{
			MP = VP[I];
			CMP = VC[I];
		}
	}
	
	return CMP;
}

int CEDULA_m (short &NP, int VC[], float VP[])
{
	//Variables
		short I;
		float mP;
		int CmP;
		
	mP = 0;
		
	for (I=0; I<NP; I++)
	{
		if (VP[I] < mP)
		{
			mP = VP[I];
			CmP = VC[I];
		}
	}
	
	return CmP;
}




































