/*
	Name: Algoritmo número factorial
	Copyright: 
	Author: David Ospina, Santiago Espinal y María José Arcila
	Date: 02/07/22 11:24
	Description: 
*/

# include <iostream>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <math.h>
# include <string.h>
# include <windows.h>

using namespace std;

int FACTORIAL (int &);

int main ()
{
	//Variables
		int Num, Facto;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	cout << "Ingrese un número del cual desee hallar su factorial: ";
	cin >> Num;
	fflush (stdin);
	
	Facto = FACTORIAL (Num);
	
	cout << "La factorial de " << Num << " es: " << Facto << endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

int FACTORIAL (int &Nume)
{
	//Variables
		int Fact, Cont;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	Fact = 1;
	
	for (Cont=1; Cont<=Nume; Cont++)
	{
		Fact = Fact*Cont;
	}
	
	system ("pause");
	
	return Fact;
}

/*
int FACTORIAL (int &Nume)
{
	//Variables
		int Fact, Cont;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	Fact = 1;
	Cont = 1;
	
	while (Cont<=Nume)
	{
		Fact = Fact*Cont;
		Cont++;
	}
	
	system ("pause");
	
	return Fact;
}
*/
/*
int FACTORIAL (int &Nume)
{
	//Variables
		int Fact, Cont;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	Fact = 1;
	Cont = 1;
	
	do
	{
		Fact = Fact*Cont;
		Cont++;
	}
	while (Cont<=Nume);
	
	system ("pause");
	
	return Fact;
}
*/
