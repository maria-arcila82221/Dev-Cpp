/*
	Name: 
	Copyright: 
	Author: 
	Date: 18/05/22 12:36
	Description: 
*/

// Parametrizacion



# include <stdio.h>

// Función para la suma de dos valores

int SUMA(int, int);

int main()
{
	//Variables
		int N1, N2, Res;
	printf ("Ingrese el Numero 1 ");
	scanf("%d", &N1);
	printf ("Ingrese el Numero 2 ");
	scanf("%d", &N2);
	Res = SUMA (N1, N2);
	printf ("La suma de %d y %d es = %d ", N1, N2, Res);
	return 0;
}

int SUMA(int A, int B)
{
	// Variable
		int R;
		R = A + B;
		return R;
}

