/*
	Name: Algoritmo clima
	Copyright: 
	Author: María José Arcila Cano
	Date: 27/06/22 07:50
	Description: 
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <math.h>
# include <string.h>

int main ()
{
	//Variables
		float Temp, OK=17.5;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("¿Cual es la temperatura?: ");
	scanf ("%f", &Temp);
	fflush (stdin);
	
	if (Temp != OK)
	{
		printf ("Esta no es la temperatura ideal\n");
		printf ("Ingrese otra temperatura: ");
		scanf ("%f", &Temp);
		fflush (stdin);
	}	
	if (Temp < OK)
	{
		printf ("Buen clima para trabajar\n\n");
	}
	if (Temp > OK)
	{
		printf ("¡Que bueno ir a nadar!\n\n");
	}
	if (Temp == OK)
	{
		printf ("Esta es la temperatura ideal\n\n");
	}
	
	system ("pause");
	
	return 0;
}




































