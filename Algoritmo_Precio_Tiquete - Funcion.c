/*
	Name: Algoritmo precio tiquete - funcion
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

int TIQUETE (int, char[30]);

int main ()
{
	//Variables
		int Sal_M, Tiq;
		char Temp[30];
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese el valor del salario mínimo: ");
	scanf ("%d", &Sal_M);
	fflush (stdin);
	printf ("Ingrese la temporada del año: ");
	gets (Temp);
	fflush (stdin);
	
	Tiq = TIQUETE (Sal_M, Temp);
	
	printf ("El valor a pagar por tiquete es: %d\n\n", Tiq);
	
	system ("pause");
	
	return 0;
	
}

int TIQUETE (int Sal, char Temporada[30])
{
	//Variables
		int Tiqt;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	if (Temporada = "BAJA")
	{
		Tiqt = Sal*0.5;
	}
	else
	{
		Tiqt = Sal*0.8;
	}
	
	system ("pause");
	
	return Tiqt;
	
}
