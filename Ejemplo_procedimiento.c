/*
	Name: 			Ejemplo procedimiento en C
	Copyright: 		
	Author: 		LFGA
	Date: 			18/05/22 12:36
	Description: 	Programa que suma y resta
*/

# include <stdio.h>

// Parametrizacion de funciones

void SUMA_RESTA(int, int, int *, int *);

// Función principal

int main()
{
	//Variables
		int N1, N2, Suma, Resta;
	printf ("Ingrese el Numero 1 ");
	scanf("%d", &N1);
	printf ("Ingrese el Numero 2 ");
	scanf("%d", &N2);
	SUMA_RESTA(N1, N2, &Suma, &Resta);
	printf ("\nLa suma de %d y %d es = %d\n", N1, N2, Suma);
	printf ("La resta de %d y %d es = %d", N1, N2, Resta);
	return 0;
}

// Función para la suma y resta de dos valores

void SUMA_RESTA(int A, int B, int *R_s, int *R_r)
{
	*R_s = A + B; 
	*R_r = A - B;
}

