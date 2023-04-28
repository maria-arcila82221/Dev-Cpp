/*
	Name: Algoritmo_Alumnos
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
		int NA, NH, NM;
		float PH, PM;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingrese el número de alumnos que hay en el grupo: ");
	scanf ("%d", &NA);
	fflush (stdin);
	printf ("Ingrese el número de alumnos hombres que hay en el grupo: ");
	scanf ("%d", &NH);
	fflush (stdin);
	printf ("Ingrese el número de alumnas mujeres que hay en el grupo: ");
	scanf ("%d", &NM);
	fflush (stdin);
	
	PH=(NH*100)/NA;
	PM=(NM*100)/NA;
	
	printf ("El porcentaje de hombres que hay en el grupo de estudiantes es: %f\n", PH);
	printf ("El porcentaje de mujeres que hay en el grupo de estudiantes es: %f\n\n", PM);
	
	system ("pause");
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
