/*
	Name: Algoritmo promedio grupos
	Copyright: 
	Author: María José Arcila Cano
	Date: 04/07/22 19:11
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

float PROMEDIO (float, short);


int main ()
{
	//Variables
		float Suma_NM, Suma_NG, Suma_NGs, Nota_M, Prom_NA, Prom_NG, Prom_NGs;
		short Cant_G, Cant_A, Cant_M, Cont_NGs, Cont_NG, Cont_NM;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	cout << "Ingrese la cantidad de grupos que hay: ";
	cin >> Cant_G;
	fflush (stdin);
	
	Suma_NGs = 0;
	
	for (Cont_NGs=0; Cont_NGs<Cant_G; Cont_NGs++)
	{
		cout << "Ingrese la cantidad de alumnos que hay: ";
		cin >> Cant_A;
		fflush (stdin);
		
		Suma_NG = 0;
		
		for (Cont_NG=0; Cont_NG<Cant_A; Cont_NG++)
		{
			cout << "Ingrese la cantidad de materias que tiene el alumno: ";
			cin >> Cant_M;
			fflush (stdin);
			
			Suma_NM = 0;
			
			for (Cont_NM=0; Cont_NM<Cant_M; Cont_NM++)
			{
				cout << "Ingrese la nota definitiva de la materia: ";
				cin >> Nota_M;
				fflush (stdin);
				
				Suma_NM += Nota_M;
			}
			
			Prom_NA = PROMEDIO (Suma_NM, Cont_NM);
			
			cout << "La nota promedio del alumno es: " << Prom_NA << endl;
			
			Suma_NG += Prom_NA;
		}
		
		Prom_NG = PROMEDIO (Suma_NG, Cont_NG);
		
		cout << "La nota promedio del grupo es: " << Prom_NG << endl;
		
		Suma_NGs += Prom_NG;
	}
	
	Prom_NGs = PROMEDIO (Suma_NGs, Cont_NGs);
	
	cout << "La nota promedio del grado es: " << Prom_NGs << endl << endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

/*
int main ()
{
	//Variables
		float Suma_NM, Suma_NG, Suma_NGs, Nota_M, Prom_NA, Prom_NG, Prom_NGs;
		short Cant_G, Cant_A, Cant_M, Cont_NGs, Cont_NG, Cont_NM;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	cout << "Ingrese la cantidad de grupos que hay: ";
	cin >> Cant_G;
	fflush (stdin);
	
	Suma_NGs = 0;
	Cont_NGs = 0;
	
	while (Cont_NGs<Cant_G)
	{
		cout << "Ingrese la cantidad de alumnos que hay: ";
		cin >> Cant_A;
		fflush (stdin);
		
		Suma_NG = 0;
		Cont_NG = 0;
		
		while (Cont_NG<Cant_A)
		{
			cout << "Ingrese la cantidad de materias que tiene el alumno: ";
			cin >> Cant_M;
			fflush (stdin);
			
			Suma_NM = 0;
			Cont_NM = 0;
			
			while (Cont_NM<Cant_M)
			{
				cout << "Ingrese la nota definitiva de la materia: ";
				cin >> Nota_M;
				fflush (stdin);
				
				Suma_NM += Nota_M;
				Cont_NM++;
			}
			
			Prom_NA = PROMEDIO (Suma_NM, Cont_NM);
			
			cout << "La nota promedio del alumno es: " << Prom_NA << endl;
			
			Suma_NG += Prom_NA;
			Cont_NG++;
		}
		
		Prom_NG = PROMEDIO (Suma_NG, Cont_NG);
		
		cout << "La nota promedio del grupo es: " << Prom_NG << endl;
		
		Suma_NGs += Prom_NG;
		Cont_NGs++;
	}
	
	Prom_NGs = PROMEDIO (Suma_NGs, Cont_NGs);
	
	cout << "La nota promedio del grado es: " << Prom_NGs << endl << endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
}
*/
/*
int main ()
{
	//Variables
		float Suma_NM, Suma_NG, Suma_NGs, Nota_M, Prom_NA, Prom_NG, Prom_NGs;
		short Cant_G, Cant_A, Cant_M, Cont_NGs, Cont_NG, Cont_NM;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	cout << "Ingrese la cantidad de grupos que hay: ";
	cin >> Cant_G;
	fflush (stdin);
	
	Suma_NGs = 0;
	Cont_NGs = 0;
	
	do
	{
		cout << "Ingrese la cantidad de alumnos que hay: ";
		cin >> Cant_A;
		fflush (stdin);
		
		Suma_NG = 0;
		Cont_NG = 0;
		
		do
		{
			cout << "Ingrese la cantidad de materias que tiene el alumno: ";
			cin >> Cant_M;
			fflush (stdin);
			
			Suma_NM = 0;
			Cont_NM = 0;
			
			do
			{
				cout << "Ingrese la nota definitiva de la materia: ";
				cin >> Nota_M;
				fflush (stdin);
				
				Suma_NM += Nota_M;
				Cont_NM++;
			}
			while (Cont_NM<Cant_M);
			
			Prom_NA = PROMEDIO (Suma_NM, Cont_NM);
			
			cout << "La nota promedio del alumno es: " << Prom_NA << endl;
			
			Suma_NG += Prom_NA;
			Cont_NG++;
		}
		while (Cont_NG<Cant_A);
		
		Prom_NG = PROMEDIO (Suma_NG, Cont_NG);
		
		cout << "La nota promedio del grupo es: " << Prom_NG << endl;
		
		Suma_NGs += Prom_NG;
		Cont_NGs++;
	}
	while (Cont_NGs<Cant_G);
	
	Prom_NGs = PROMEDIO (Suma_NGs, Cont_NGs);
	
	cout << "La nota promedio del grado es: " << Prom_NGs << endl << endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
}
*/

float PROMEDIO (float Suma, short Cont)
{
	//Variables
		float Prom;
			
	Prom = Suma/Cont;
	
	system ("pause");
	
	return Prom;
}




































