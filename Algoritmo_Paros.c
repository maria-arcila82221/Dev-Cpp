/*
	Name: Algoritmo paros
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

int main ()
{
	//Variables
		int Nr_Paros, Cant_P;
		char Mensaje_Si[30] = "Puede graduarse";
		char Mensaje_No[30] = "No puede graduarse";
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese el número de paros en los que ha participado: ");
	scanf ("%d", &Nr_Paros);
	fflush (stdin);
	
	if (Nr_Paros >= 6)
	{
		printf ("%s\n\n", Mensaje_Si);
	}
	else
	{
		printf ("%s\n", Mensaje_No);
		
		Cant_P=6-Nr_Paros;
		
		printf ("Le faltan %d ", Cant_P);
		printf ("paros\n\n");
	}
	
	system ("pause");
	
	return 0;
}
	
	
	
	
	
	
	
