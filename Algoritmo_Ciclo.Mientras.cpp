/*
	Name: Algoritmo ciclo mientras
	Copyright: 
	Author: María José Arcila Cano
	Date: 27/06/22 09:02
	Description: 
*/

# include <iostream>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <math.h>
# include <string.h>

using namespace std;

int main ()
{
	//Variables
		int I;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	I = 1;
	
	while (I <= 5)
	{
		cout << "Iteración " << I << "\n\n";
		
		I = I+1;
	}
	
	system ("pause");
	
	return EXIT_SUCCESS;
}


























