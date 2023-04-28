/*
	Name: Algoritmo notas
	Copyright: 
	Author: María José Arcila Cano
	Date: 17/06/22 18:49
	Description: 
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <string.h>
# include <math.h>

float CALCULO (char[30]);
char ESTADO_N (float);

int main ()
{
	//Variables
		float Nota_Def;
		char Estado;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	Nota_Def = CALCULO ("Algoritmos");
	Estado = ESTADO_N (Nota_Def);
	
	printf ("La nota de algoritmos es: %f", Nota_Def);
	printf (" y la: %c (A: Aprobó y R: Reprobó)\n\n", Estado);
	
	system ("pause");
	
	Nota_Def = CALCULO ("Calculo");
	Estado = ESTADO_N (Nota_Def);
	
	printf ("La nota de calculo es: %f", Nota_Def);
	printf (" y la: %c (A: Aprobó y R: Reprobó)\n\n", Estado);
	
	system ("pause");
	
	Nota_Def = CALCULO ("Discretas");
	Estado = ESTADO_N (Nota_Def);
	
	printf ("La nota de discretas es: %f", Nota_Def);
	printf (" y la: %c (A: Aprobó y R: Reprobó)\n\n", Estado);
	
	system ("pause");
	
	return 0;
}

float CALCULO (char Asign[30])
{
	//Variables
		float Nota_Ex, Nota_T_1, Nota_T_2, Nota_T_3, Nota_Prom_t, Nota_Df;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Notas para: %s\n", Asign);
	printf ("Ingrese nota examen: ");
	scanf ("%f", &Nota_Ex);
	fflush (stdin);
	printf ("Ingrese nota tarea 1: ");
	scanf ("%f", &Nota_T_1);
	fflush (stdin);
	printf ("Ingrese nota tarea 2: ");
	scanf ("%f", &Nota_T_2);
	fflush (stdin);
	printf ("Ingrese nota tarea 3: ");
	scanf ("%f", &Nota_T_3);
	fflush (stdin);
	
	Nota_Prom_t = (Nota_T_1+Nota_T_2+Nota_T_3)/3;
	Nota_Df = (Nota_Prom_t*0.3)+(Nota_Ex*0.7);
	
	system ("pause");
	
	return (Nota_Df);
}

char ESTADO_N (float Nota_D)
{
	//Variables
		char Est;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	if (Nota_D >= 3)
	{
		Est = 'A';
	}
	else
	{
		Est = 'R';
	}
	
	system ("pause");
	
	return Est;
}
