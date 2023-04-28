/*
	Name: Menu
	Copyright: 
	Author: María José Arcila Cano
	Date: 08/07/22 17:12
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

void LLENAR (short &, int [], string [], short []);
void ORDEN_ASCENDENTE (short &, int [], string [], short []);
void MOSTRAR (short &, int [], string [], short []);
void ORDEN_DESCENDENTE (short &, int [], string [], short []);
void BORRAR (short &, int [], string [], short [], int &);
void INSERTAR (short &, int [], string [], short []);
void INSERTAR_ORDENADO (short &, int [], string [], short []);
short BUSQUEDA (short, int [], string [], short []);
short BUSQUEDA_BINARIA (short, int [], string [], short []);

int main ()
{
	//Variables
		char Res_ME, Res_MI, Res_MIn, Res_B, Res_M;
		short Num_U, Edad_U[100], Cont_E, Pos_C;
		string Nom_U[100];
		int Ced_U[100], Ced_E;
		
	setlocale (LC_ALL, "Spanish");
	
	Res_ME = '0';
	Cont_E++;
	
	while (Res_ME != '6')
	{
		cout << "\t" << "MENU DE ESTUDIANTES" << endl << endl;
		cout << "1. Captura de datos" << endl;
		cout << "2. Listar datos" << endl;
		cout << "3. Eliminar un registro" << endl;
		cout << "4. Insertar un registro" << endl;
		cout << "5. Buscar un registro" << endl;
		cout << "6. Terminar" << endl;
		cin >> Res_ME;
		fflush (stdin);
		cout << endl;
	
		switch (Res_ME)
		{
			case '1':	if (Cont_E == 1)
						{
							cout << "Ingrese el número de usuarios que desee agregar: ";
							cin >> Num_U;
							fflush (stdin);
							cout << endl;
		
							LLENAR (Num_U, Ced_U, Nom_U, Edad_U);
								
							Cont_E++;
						}
						else
						{
							cout << "Ya ingreso usuarios a la base de datos" << endl << endl;
						}
						
						break;
							
			case '2':	cout << "\t" << "Menú de impresión" << endl << endl;
						cout << "1. Imprimir en orden ascendente" << endl;
						cout << "2. Imprimir en orden descendente" << endl;
						cout << "3. Volver al menú anterior" << endl;
						cin >> Res_MI;
						fflush (stdin);
						cout << endl;
						
						switch (Res_MI)
						{
							case '1':	ORDEN_ASCENDENTE (Num_U, Ced_U, Nom_U, Edad_U);
										MOSTRAR (Num_U, Ced_U, Nom_U, Edad_U);
										
										break;
										
							case '2':	ORDEN_DESCENDENTE (Num_U, Ced_U, Nom_U, Edad_U);
										MOSTRAR (Num_U, Ced_U, Nom_U, Edad_U);
										
										break;
						}
						
						break;
						
			case '3':	cout << "Ingrese la cédula del usuario del cuál desee eliminar sus datos: ";
						cin >> Ced_E;
						fflush (stdin);
						cout << endl;
						
						BORRAR (Num_U, Ced_U, Nom_U, Edad_U, Ced_E);
						
						break;
						
			case '4':	cout << "\t" << "Menú de inserción" << endl << endl;
						cout << "4. Insertar al final del arreglo" << endl;
						cout << "5. Insertar en un arreglo ordenado" << endl;
						cout << "6. Volver al menú anterior" << endl;
						cin >> Res_MIn;
						fflush (stdin);
						cout << endl;
						
						switch (Res_MIn)
						{
							case '4':	INSERTAR (Num_U, Ced_U, Nom_U, Edad_U);
										
										break;
										
							case '5':	INSERTAR_ORDENADO (Num_U, Ced_U, Nom_U, Edad_U);
							
										break;
						}
						
						break;
						
			case '5':	cout << "\t" << "Menú de busqueda" << endl << endl;
						cout << "7. Realizar una busqueda normal" << endl;
						cout << "8. Realizar una busqueda rápida (Binaria)" << endl;
						cout << "9. Volver al menú anterior" << endl;
						cin >> Res_B;
						fflush (stdin);
						cout << endl;
						
						switch (Res_B)
						{
							case '7':	Pos_C = BUSQUEDA (Num_U, Ced_U, Nom_U, Edad_U);
										
										break;
										
							case '8':	Pos_C = BUSQUEDA_BINARIA (Num_U, Ced_U, Nom_U, Edad_U);
							
										break;
						}
						
						if (Pos_C == -1)
						{
							cout << "El usuario buscado no fue encontrado" << endl << endl;
						}
						else
						{
							cout << "El usuario fue encontrado en la posición: " << Pos_C << endl << endl;
							cout << "\t" << "¿Qué dato del usuario desea modificar?" << endl << endl;
							cout << "1. Cédula" << endl;
							cout << "2. Nombre" << endl;
							cout << "3. Edad" << endl;
							cout << "4. Volver al menú principal" << endl;
							cin >> Res_M;
							fflush (stdin);
							cout << endl;
							
							switch (Res_M)
							{
								case '1':	cout << "Ingrese la nueva cédula: ";
											cin >> Ced_U[Pos_C];
											fflush (stdin);
											cout << endl;
											
											break;
											
								case '2':	cout << "Ingrese el nuevo nombre: ";
											getline (cin, Nom_U[Pos_C]);
											fflush (stdin);
											cout << endl;
											
											break;
											
								case '3':	cout << "Ingrese la nueva edad: ";
											cin >> Edad_U[Pos_C];
											fflush (stdin);
											cout << endl;
											
											break;
							}
						}
						
						break;
		}
	}
	
	return EXIT_SUCCESS;
}

void LLENAR (short &NmU, int CU[], string NU[], short EU[])
{
	//Variables
		short I;
		
	for (I=0; I<NmU; I++)
	{
		cout << "Ingrese la cédula: ";
		cin >> CU[I];
		fflush (stdin);
		cout << "Ingrese el nombre: ";
		getline (cin, NU[I]);
		fflush (stdin);
		cout << "Ingrese la edad: ";
		cin >> EU[I];
		fflush (stdin);
		cout << endl;
	}
}

void ORDEN_ASCENDENTE (short &NmU, int CU[], string NU[], short EU[])
{
	//Variables
		short I, J, Aux_EU;
		string Aux_NU;
		int Aux_CU;
		
	for (I=0; I<(NmU-1); I++)
	{
		for (J=0; J<(NmU-1); J++)
		{
			if (CU[J] > CU[J+1])
			{
				Aux_CU = CU[J];
				Aux_NU = NU[J];
				Aux_EU = EU[J];
				CU[J] = CU[J+1];
				NU[J] = NU[J+1];
				EU[J] = EU[J+1];
				CU[J+1] = Aux_CU;
				NU[J+1] = Aux_NU;
				EU[J+1] = Aux_EU;
			}
		}
	}
}

void MOSTRAR (short &NmU, int CU[], string NU[], short EU[])
{
	//Variables
		short I;
		
	for (I=0; I<NmU; I++)
	{
		cout << CU[I] << "\t" << NU[I] << "\t" << EU[I] << endl << endl;
	}
}

void ORDEN_DESCENDENTE (short &NmU, int CU[], string NU[], short EU[])
{
	//Variables
		short I, J, Aux_EU;
		string Aux_NU;
		int Aux_CU;
		
	for (I=0; I<(NmU-1); I++)
	{
		for (J=0; J<(NmU-1); J++)
		{
			if (CU[J] < CU[J+1])
			{
				Aux_CU = CU[J];
				Aux_NU = NU[J];
				Aux_EU = EU[J];
				CU[J] = CU[J+1];
				NU[J] = NU[J+1];
				EU[J] = EU[J+1];
				CU[J+1] = Aux_CU;
				NU[J+1] = Aux_NU;
				EU[J+1] = Aux_EU;
			}
		}
	}
}

void BORRAR (short &NmU, int CU[], string NU[], short EU[], int &CE)
{
	//Variables
		short I, K;
		
	I = 0;
	
	while ((I<NmU) && (CE!=CU[I]))
	{
		I++;
	}
	
	if (I<NmU)
	{
		for (K=0; K<NmU-1; K++)
		{
			CU[K] = CU[K+1];
			NU[K] = NU[K+1];
			EU[K] = EU[K+1];
		}
		
		NmU--;
	}
	else
	{
		cout << "El usuario a borrar no se encuentra en el arreglo" << endl << endl;
	}
}

void INSERTAR (short &NmU, int CU[], string NU[], short EU[])
{	
	//Variables
		string NI;
		short EI;
		int CI;
		
	NmU++;
	
	cout << "Ingrese la cédula del usuario qué desea insertar: ";
	cin >> CI;
	fflush (stdin);
	
	CU[NmU] = CI;
	
	cout << "Ingrese el nombre del usuario qué desea insertar: ";
	getline (cin, NI);
	fflush (stdin);
	
	NU[NmU] = NI;
		
	cout << "Ingrese la edad del usuario qué desea insertar: ";
	cin >> EI;
	fflush (stdin);
	cout << endl;

	EU[NmU] = EI;
}

void INSERTAR_ORDENADO (short &NmU, int CU[], string NU[], short EU[])
{
	//Variables
		short I, K, EI;
		string NI;
		int CI;
		
	cout << "Ingrese la cédula del usuario qué desea insertar: ";
	cin >> CI;
	fflush (stdin);
	
	I = 0;
	
	while ((I<NmU) && (CI>CU[I]))
	{
		I++;
	}
	
	NmU++;
	
	for (K=NmU; K<I+1; K--)
	{
		CU[K] = CU[K-1];
	}
	
	CU[I] = CI;
	
	cout << "Ingrese el nombre del usuario qué desea insertar: ";
	getline (cin, NI);
	fflush (stdin);
	
	NU[I] = NI;
	
	cout << "Ingrese la edad del usuario qué desea insertar: ";
	cin >> EI;
	fflush (stdin);
	cout << endl;
	
	EU[I] = EI;
}

short BUSQUEDA (short NmU, int CU[], string NU[], short EU[])
{
	//Variables
		short I;
		int CB;
		
	cout << "Ingrese la cédula del usuario qué desea buscar: ";
	cin >> CB;
	fflush (stdin);
	cout << endl;
		
	I = 0;
	
	while ((I<NmU) && (CB!=CU[I]))
	{
		I++;
	}
	
	if (I<NmU)
	{
		return I;
	}
	else
	{
		return -1;
	}
}

short BUSQUEDA_BINARIA (short NmU, int CU[], string NU[], short EU[])
{
	//Variables
		short P, U, Sw, Mitad;
		int CB;
		
	cout << "Ingrese la cédula del usuario qué desea buscar: ";
	cin >> CB;
	fflush (stdin);
	cout << endl;
		
	P = 0;
	U = NmU;
	Sw = 0;
	
	while ((P<U) && (Sw==0))
	{
		Mitad = (P+U)/2;
		
		if (CU[Mitad] == CB)
		{
			Sw = 1;
		}
		else
		{
			if (CB <= CU[Mitad])
			{
				U = Mitad-1;
			}
			else
			{
				P = Mitad+1;
			}
		}
	}
	
	if (CB == CU[Mitad])
	{
		return Mitad;
	}
	else
	{
		return -1;
	}
}




















