/*
	Name: Primer_Programa.c
	Copyright: 
	Author: María José Arcila Cano
	Date: 22/04/22 10:18
	Description: Mi primer programa en C hola munndo
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>

int main()
{
	// Variables
	    char Nom[50];
	    
	system ("cls");
	setlocale (LC_ALL, " ");
	    
	printf ("Ingrese su nombre: ");
	gets (Nom);
	fflush (stdin);
	
	printf ("HOLA MUNDO... YO SOY %s\n\n", Nom);
	
	system ("pause");
	
	return 0;
}


