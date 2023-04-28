/*
	Name: Algoritmo mientras 03
	Copyright: 
	Author: María José Arcila Cano
	Date: 27/06/22 10:25
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
		int I, Doble;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	I = 10;
	
	while (I > 0)
	{
		Doble = I*2;
		
		cout << I << "x2 = " << Doble << endl;
		
		I = I-1;
		
		system ("pause");
	}
	
	system ("pause");
	
	return EXIT_SUCCESS;
}




































