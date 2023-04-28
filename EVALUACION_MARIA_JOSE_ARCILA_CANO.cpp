/*
	Name: EVALUACION_MARÍA_JOSÉ_ARCILA_CANO
	Copyright: 
	Author: María José Arcila
	Date: 19/07/22 15:41
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
		float Hora;
		char Desem;
		short Edad, N_Tiq, Est, Cont_PB;
		int Aux, Vr_Tiq, Aport, Sum_Aux, Sum_Aport, Aport_Admin, Vr_Tiq2;
		string Tiq, Est_C;
		bool Aporta;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	Sum_Aux = 0;
	Sum_Aport = 0;
	Cont_PB = 0;
	
	cout << "¿Qué hora es? (09:03 = 09.03): ";
	cin >> Hora;
	fflush (stdin);
	
	while ((Hora>=05.00) && (Hora<12.00))
	{
		cout << "¿Qué tipo de tiquete desea comprar? (Sencillo o Integrado): ";
		getline (cin, Tiq);
		fflush (stdin);
		cout << "¿Cuantos tiquetes desea comprar?: ";
		cin >> N_Tiq;
		fflush (stdin);
		
		if (Tiq == "Sencillo")
		{
			Vr_Tiq = 1800*N_Tiq;
		}
		else
		{
			Vr_Tiq = 2200*N_Tiq;
		}
		
		cout << "¿Cuál es su estrato?: ";
		cin >> Est;
		fflush (stdin);
		cout << "¿Está desemplead@? (S o N): ";
		cin >> Desem;
		fflush (stdin);
		
		if ((Est<4) && (Desem=='S'))
		{
			cout << "¿Cuál es su edad?: ";
			cin >> Edad;
			fflush (stdin);
			
			switch (Est)
			{
				case 1:		if (Edad<18)
							{
								Aux = 180000;
							}
							else
							{
								Aux = 230000;
							}
							
							break;
							
				case 2:		if (Edad<18)
							{
								Aux = 150000;
							}
							else
							{
								Aux = 200000;
							}
							
							break;
							
				case 3:		if (Edad<18)
							{
								Aux = 120000;
							}
							else
							{
								Aux = 170000;
							}
							
							break;
			}
			
			Sum_Aux += Aux;
			
			cout << "El valor del auxilio es de: $" << Aux << endl << endl;
			cout << "¿Cuál es su estado civil? (Casad@, Solter@, Viud@ u Otr@): ";
			getline (cin, Est_C);
			fflush (stdin);	
			
			if ((Est_C=="Casado") || (Est_C=="Casada"))
			{
				Vr_Tiq2 = Vr_Tiq/2;
				
				cout << "El valor por concepto de tiquete es de: $" << Vr_Tiq2 << endl << endl;
			}
			else
			{
				cout << "El valor por concepto de tiquete es de: $" << Vr_Tiq << endl << endl;
			}
			
			Cont_PB++;
			
			Aporta = true;
		}
		else
		{
			switch (Est)
			{
				case 1:	
				case 2:
				case 3:	Aport = Vr_Tiq*0.05;
				
						break;
				
				case 4:	
				case 5:
				case 6: Aport = Vr_Tiq*0.1;
				
						break;
			}
			
			Sum_Aport += Aport;
			
			cout << "El valor de aporte que debe dar por la compra es de: $" << Aport << endl << endl;
			
			Vr_Tiq2 = Vr_Tiq+Aport;
			
			cout << "El valor por concepto de tiquete es de: $" << Vr_Tiq2 << endl << endl;
		}
		
		cout << "¿Qué hora es? (09:03 = 09.03): ";
		cin >> Hora;
		fflush (stdin);
	}	
	
	Aport_Admin = Sum_Aux-Sum_Aport;
	
	if (Aporta == true)
	{
		cout << "La administración municipal debe aportar: $" << Aport_Admin << endl << endl;
		cout << "Hubo " << Cont_PB << " personas beneficiadas con el auxilio" << endl << endl;
		cout << "En total, se dio de auxilio: $" << Sum_Aux << endl << endl;
	}
	else
	{
		cout << "No hubo beneficiarios, por lo que nadie tuvo qué dar un aporte" << endl << endl;
	}
	
	system ("pause");
	
	return EXIT_SUCCESS;
}







// 1310
// 




























