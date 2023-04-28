/*
	Name: Algoritmo numero días
	Copyright: 
	Author: Maria Jose Arcila Cano
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
		int Nr_M, Cant_D;
	
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese el numero del mes: ");
	scanf ("%d", &Nr_M);
	fflush (stdin);
	
	switch (Nr_M)
	{
		case 2: Cant_D=28;
		
				break;
				
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 12: Cant_D=31;
		
				 break;
				 
		case 9:
		case 4:
		case 6:
		case 11: Cant_D=30;
		
				 break;		 
	}
	
	printf ("La cantidad de días que tiene el mes es: %d\n\n", Cant_D);
	
	system ("pause");
	
	return 0;	
}
