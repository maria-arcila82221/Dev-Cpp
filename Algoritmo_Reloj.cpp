/*
	Name: 
	Copyright: 
	Author: María José Arcila Cano
	Date: 15/06/22 12:07
	Description: 
*/

# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <locale.h>
# include <wchar.h>
# include <math.h>
# include <windows.h>

using namespace std;

void CALCULO_HORA (short &, short &, short &);

int main ()
{
	//Variables
		short H, M, S;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	CALCULO_HORA (H, M, S);
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

void CALCULO_HORA (short &Hora, short &Minuto, short &Segundo)
{
	system ("cls");
	
	Hora = 0;	
	
	do
	{
		system ("cls");
		
		Minuto = 0;
		
		while (Minuto < 60)
		{
			system ("cls");
			
			for (Segundo=0; Segundo<60; Segundo++)
			{
				system ("cls");
				
				cout << Hora << ":" << Minuto << ":" << Segundo << endl;
				
				Sleep (1000);
			}
				
			Minuto++;
		}
		
		Hora++;
	}
	while (Hora < 24);
	
	system ("pause");
}
















