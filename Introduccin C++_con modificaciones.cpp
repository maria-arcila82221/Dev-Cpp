/*
	Name: 
	Copyright: 
	Author: María José Arcila Cano
	Date: 15/06/22 12:07
	Description: 
*/

# include <iostream>
# include <stdlib.h>
# include <string.h>

using namespace std;



int main ()
{
	
	int Edad;
	float Peso;
	char Sex;
	char Nom[20];
	string Dir;
	
	cout << "Ingrese su nombre: ";
	cin.getline (Nom, 200);
	cout << "HOLA MUNDO SOY: " << Nom << endl;
	
	DATOS (Peso, Sex);
	
	cout << "Su peso es: " << Peso << " y su genero es: " << Sex << endl;
	
	return EXIT_SUCCESS;
}

void DATOS (float &Pe, char &Sexo)
{
	cout << "Ingrese su peso: ";
	cin >> Pe;
	cout << "Ingrese su genero (N/F/O): ";
	
}





















