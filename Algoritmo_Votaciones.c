/*
	Name: Algoritmo votaciones
	Copyright: 
	Author: María José Arcila Cano
	Date: 26/04/22 20:48
	Description:
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>

int main ()
{
	//Variables
		short Edad;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese su edad: ");
	scanf ("%i", &Edad);
	fflush (stdin);
	
	if (Edad >= 18)
	{
		printf ("Puede votar\n\n");
	}
	
	system ("pause");
	
	return 0;
}
