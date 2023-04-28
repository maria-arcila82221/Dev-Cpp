/*
	Name: Algoritmo produccion
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
		int V_venta;
		float Cant_v1, Cant_v2, Cant_v3, Tot_l, Por_v1, Por_v2, Por_v3;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese la cantidad de leche de la vaca 1: ");
	scanf ("%f", &Cant_v1);
	fflush (stdin);
	printf ("Ingrese la cantidad de leche de la vaca 2: ");
	scanf ("%f", &Cant_v2);
	fflush (stdin);
	printf ("Ingrese la cantidad de leche de la vaca 3: ");
	scanf ("%f", &Cant_v3);
	fflush (stdin);
	
	Tot_l=Cant_v1+Cant_v2+Cant_v3;
	Por_v1=(Cant_v1/Tot_l)*100;
	Por_v2=(Cant_v2/Tot_l)*100;
	Por_v3=(Cant_v3/Tot_l)*100;
	
	if (Tot_l > 300)
	{
		V_venta=Tot_l*10000/2;
		
		printf ("El propietario ha decidido vender la produccion en: %d\n", V_venta);
	}
	else
	{
		printf ("El propietario ha decidido no vender la produccion\n");
	}
	
	printf ("El porcentaje de leche de la vaca 1 con respecto al total es del: %f%\n", Por_v1);
	printf ("El porcentaje de leche de la vaca 2 con respecto al total es del: %f%\n", Por_v2);
	printf ("El porcentaje de leche de la vaca 3 con respecto al total es del: %f%\n\n", Por_v3);
	
	system ("pause");
	
	return 0;
}


