/*
	Name: Algortimos_equivalencia 
	Copyright: 
	Author: Maria Jose Arcila, Santiago Espinal, David Ospina 
	Date: 06/05/22 15:23
	Description: 
*/

# include <stdio.h>
# include <stdio.h>
# include <locale.h>
# include <wchar.h>

int main()
{
	//Variables
		int cant_pesos;
		float equivalencia, cant_dolar ;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf("Ingrese el valor del  1 dólar en su país: ");
	scanf("%f", &cant_dolar);
	fflush (stdin);
	printf("Ingrese la cantidad de pesos que tenga: ");
	scanf("%d", &cant_pesos);
	fflush (stdin);
	
	equivalencia=cant_pesos/cant_dolar ;
	
	printf("Lo que usted tiene en dolares es: %f\n\n", equivalencia);
	
	system ("pause");
	
	return 0;
}


