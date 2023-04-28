/*
	Name: Algoritmo precio tiquete - procedimiento
	Copyright: 
	Author: Maria Jose Arcila Cano
	Date: 26/04/22 20:48
	Description:
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <string.h>

void TIQUETE (int , char [30]);

int main ()
{
	//Variables
		int Sal_M;
		char Temp[30];
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese el valor del salario mínimo: ");
	scanf ("%d", &Sal_M);
	fflush (stdin);
	printf ("Ingrese la temporada del año: ");
	gets (Temp);
	fflush (stdin);
	
	TIQUETE (Sal_M, Temp);
	
	//system ("pause");
	
	return 0;
	
}

void TIQUETE (int Sal, char Temporada[30])
{
	//Variables
		int Tiqt;
		
	if (strcmp(Temporada, "Baja")== 0)
	{
		Tiqt = Sal*0.5;
	}
	else
	{
		Tiqt = Sal*0.8;
	}
	
	printf ("El valor del tiquete es: %d", Tiqt);
	
	// system ("pause");
	
}
