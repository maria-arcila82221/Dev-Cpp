/*
	Name: Algoritmo calculo calificacion
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
		float CP1, CP2, CP3, CE, CT, P_CP, P_CPe, CEe, CTe, CF;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese el valor de la primera calificación parcial: ");
	scanf ("%f", &CP1);
	fflush (stdin);
	printf ("Ingrese el valor de la segunda calificación parcial: ");
	scanf ("%f", &CP2);
	fflush (stdin);
	printf ("Ingrese el valor de la tercera calificación parcial: ");
	scanf ("%f", &CP3);
	fflush (stdin);
	printf ("Ingrese el valor de la calificación del examen final: ");
	scanf ("%f", &CE);
	fflush (stdin);
	printf ("Ingrese el valor de la calificación del trabajo final: ");
	scanf ("%f", &CT);
	fflush (stdin);
	
	P_CP=(CP1+CP2+CP3)/3;
	P_CPe=P_CP*0.55;
	CEe=CE*0.3;
	CTe=CT*0.15;
	CF=P_CPe+CEe+CTe;
	
	printf ("El valor de la calificación final en la materia de algoritmos es %f\n\n", CF);
	
	system ("pause");
	
	return 0;
}
