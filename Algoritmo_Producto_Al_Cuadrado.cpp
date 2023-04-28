/*
	Name: Algoritmo producto al cuadrado
	Copyright: 
	Author: María José Arcila Cano
	Date: 26/06/22 18:08
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
		int Num, Producto, Cu_del_P;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese un número: ");
	scanf ("%d", &Num);
	fflush (stdin);
	
	Producto = Num*3;
	Cu_del_P = pow(Producto, 2);
	
	printf ("El número multiplicado por tres y elevando el producto a dos da: %d\n\n", Cu_del_P);
	
	system ("pause");
	
	return 0;
}
