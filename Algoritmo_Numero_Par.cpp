/*
	Name: Algoritmo número par
	Copyright: 
	Author: María José Arcila Cano
	Date: 27/06/22 11:34
	Description: 
*/

# include <iostream>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <math.h>
# include <string.h>

using namespace std;

void Par (int &);

int main ()
{
	//Variables
		int Num;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	cout << "Digite un número para indicarle sí es o no par: ";
	cin >> Num;
	fflush (stdin);
	
	Par (Num);
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

void Par (int &N)
{
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	if ((N%2) == 0)
	{
		cout << "El número es par" << endl;
	}
	else
	{
		cout << "El número es impar" << endl;
	}
	
	system ("pause");
}


























