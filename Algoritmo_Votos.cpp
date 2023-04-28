/*
	Name: Algoritmo votos
	Copyright: 
	Author: David Ospina, Santiago Espinal y Maria Jose Arcila
	Date: 03/07/22 10:34
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

void SUMA_VOTOS (char &, int &, int &, int &, int &, int &);


int main ()
{
	//Variables
		float Hora;
		int Suma_Vot1, Suma_Vot2, Suma_Vot3, Suma_Vot4, Suma_Vot5;
		char Cand;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	cout << "¿Qué hora es? (Ejemplo: 09:05 = 09.05): ";
	cin >> Hora;
	fflush (stdin);
	cout << endl;
	
	Suma_Vot1 = 0;
	Suma_Vot2 = 0;
	Suma_Vot3 = 0;
	Suma_Vot4 = 0;
	Suma_Vot5 = 0;
	
	while (Hora<=16.00)
	{
		cout << "Ingrese el candidato por el cual desea votar (1=Pedro, 2=Pablo, 3=Martha, 4=Juan y 5=Voto en blanco): ";
		cin >> Cand;
		fflush (stdin);
		
		SUMA_VOTOS (Cand, Suma_Vot1, Suma_Vot2, Suma_Vot3, Suma_Vot4, Suma_Vot5);
		
		cout << "¿Qué hora es?: ";
		cin >> Hora;
		fflush (stdin);
		cout << endl;
	}
	
	if ((Suma_Vot1>Suma_Vot2) && (Suma_Vot1>Suma_Vot3) && (Suma_Vot1>Suma_Vot4) && (Suma_Vot1>Suma_Vot5))
	{
		cout << "El candidato ganador es: Pedro" << endl << endl;
	}
	else
	{
		if ((Suma_Vot2>Suma_Vot1) && (Suma_Vot2>Suma_Vot3) && (Suma_Vot2>Suma_Vot4) && (Suma_Vot2>Suma_Vot5))
		{
			cout << "El candidato ganador es: Pablo" << endl << endl;
		}
		else
		{
			if ((Suma_Vot3>Suma_Vot1) && (Suma_Vot3>Suma_Vot2) && (Suma_Vot3>Suma_Vot4) && (Suma_Vot3>Suma_Vot5))
			{
				cout << "La candidata ganadora es: Martha" << endl << endl;
			}
			else
			{
				if ((Suma_Vot4>Suma_Vot1) && (Suma_Vot4>Suma_Vot2) && (Suma_Vot4>Suma_Vot3) && (Suma_Vot4>Suma_Vot5))
				{
					cout << "El candidato ganador es: Juan" << endl << endl;
				}
				else
				{
					if ((Suma_Vot5>Suma_Vot1) && (Suma_Vot5>Suma_Vot2) && (Suma_Vot5>Suma_Vot3) && (Suma_Vot5>Suma_Vot4))
					{
						cout << "Gano el Voto en blanco" << endl << endl;
					}
					else
					{
						cout << "Hubo un empate en quién obtuvo la mayor cantidad de votos" << endl << endl;
					}
				}
			}
		}
	}
	
	cout << "La cantidad de votos de el candidato Pedro son: " << Suma_Vot1 << endl;
	cout << "La cantidad de votos de el candidato Pablo son: " << Suma_Vot2 << endl;
	cout << "La cantidad de votos de el candidato Martha son: " << Suma_Vot3 << endl;
	cout << "La cantidad de votos de el candidato Juan son: " << Suma_Vot4 << endl;
	cout << "La cantidad de votos para el Voto en blanco fue: " << Suma_Vot5 << endl << endl;
	
	if ((Suma_Vot1<Suma_Vot2) && (Suma_Vot1<Suma_Vot3) && (Suma_Vot1<Suma_Vot4) && (Suma_Vot1<Suma_Vot5))
	{
		cout << "El candidato con menos votos es: Pedro" << endl << endl;
	}
	else
	{
		if ((Suma_Vot2<Suma_Vot1) && (Suma_Vot2<Suma_Vot3) && (Suma_Vot2<Suma_Vot4) && (Suma_Vot2<Suma_Vot5))
		{
			cout << "El candidato con menos votos es: Pablo" << endl << endl;
		}
		else
		{
			if ((Suma_Vot3<Suma_Vot1) && (Suma_Vot3<Suma_Vot2) && (Suma_Vot3<Suma_Vot4) && (Suma_Vot3<Suma_Vot5))
			{
				cout << "La candidata con menos votos es: Martha" << endl << endl;
			}
			else
			{
				if ((Suma_Vot4<Suma_Vot1) && (Suma_Vot4<Suma_Vot2) && (Suma_Vot4<Suma_Vot3) && (Suma_Vot4<Suma_Vot5))
				{
					cout << "El candidato con menos votos es: Juan" << endl << endl;
				}
				else
				{
					if ((Suma_Vot5<Suma_Vot1) && (Suma_Vot5<Suma_Vot2) && (Suma_Vot5<Suma_Vot3) && (Suma_Vot5<Suma_Vot4))
					{
						cout << "El voto en blanco fue quién tuvo la menor cantidad de votos" << endl << endl;
					}
					else
					{
						cout << "Hubo un empate en quién obtuvo la menor cantidad de votos" << endl << endl;
					}
				}
			}
		}
	}
	
	system ("pause");
	
	return EXIT_SUCCESS;
}

/*
int main ()
{
	//Variables
		float Hora;
		int Suma_Vot1, Suma_Vot2, Suma_Vot3, Suma_Vot4, Suma_Vot5;
		char Cand;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	cout << "¿Qué hora es? (Ejemplo: 09:05 = 09.05): ";
	cin >> Hora;
	fflush (stdin);
	cout << endl;
	
	Suma_Vot1 = 0;
	Suma_Vot2 = 0;
	Suma_Vot3 = 0;
	Suma_Vot4 = 0;
	Suma_Vot5 = 0;
	
	do
	{
		cout << "Ingrese el candidato por el cual desea votar (1=Pedro, 2=Pablo, 3=Martha, 4=Juan y 5=Voto en blanco): ";
		cin >> Cand;
		fflush (stdin);
		
		SUMA_VOTOS (Cand, Suma_Vot1, Suma_Vot2, Suma_Vot3, Suma_Vot4, Suma_Vot5);
		
		cout << "¿Qué hora es?: ";
		cin >> Hora;
		fflush (stdin);
		cout << endl;
	}
	while (Hora<=16.00);
	
	if ((Suma_Vot1>Suma_Vot2) && (Suma_Vot1>Suma_Vot3) && (Suma_Vot1>Suma_Vot4) && (Suma_Vot1>Suma_Vot5))
	{
		cout << "El candidato ganador es: Pedro" << endl << endl;
	}
	else
	{
		if ((Suma_Vot2>Suma_Vot1) && (Suma_Vot2>Suma_Vot3) && (Suma_Vot2>Suma_Vot4) && (Suma_Vot2>Suma_Vot5))
		{
			cout << "El candidato ganador es: Pablo" << endl << endl;
		}
		else
		{
			if ((Suma_Vot3>Suma_Vot1) && (Suma_Vot3>Suma_Vot2) && (Suma_Vot3>Suma_Vot4) && (Suma_Vot3>Suma_Vot5))
			{
				cout << "La candidata ganadora es: Martha" << endl << endl;
			}
			else
			{
				if ((Suma_Vot4>Suma_Vot1) && (Suma_Vot4>Suma_Vot2) && (Suma_Vot4>Suma_Vot3) && (Suma_Vot4>Suma_Vot5))
				{
					cout << "El candidato ganador es: Juan" << endl << endl;
				}
				else
				{
					if ((Suma_Vot5>Suma_Vot1) && (Suma_Vot5>Suma_Vot2) && (Suma_Vot5>Suma_Vot3) && (Suma_Vot5>Suma_Vot4))
					{
						cout << "Gano el Voto en blanco" << endl << endl;
					}
					else
					{
						cout << "Hubo un empate en quién obtuvo la mayor cantidad de votos" << endl << endl;
					}
				}
			}
		}
	}
	
	cout << "La cantidad de votos de el candidato Pedro son: " << Suma_Vot1 << endl;
	cout << "La cantidad de votos de el candidato Pablo son: " << Suma_Vot2 << endl;
	cout << "La cantidad de votos de el candidato Martha son: " << Suma_Vot3 << endl;
	cout << "La cantidad de votos de el candidato Juan son: " << Suma_Vot4 << endl;
	cout << "La cantidad de votos para el Voto en blanco fue: " << Suma_Vot5 << endl << endl;
	
	if ((Suma_Vot1<Suma_Vot2) && (Suma_Vot1<Suma_Vot3) && (Suma_Vot1<Suma_Vot4) && (Suma_Vot1<Suma_Vot5))
	{
		cout << "El candidato con menos votos es: Pedro" << endl << endl;
	}
	else
	{
		if ((Suma_Vot2<Suma_Vot1) && (Suma_Vot2<Suma_Vot3) && (Suma_Vot2<Suma_Vot4) && (Suma_Vot2<Suma_Vot5))
		{
			cout << "El candidato con menos votos es: Pablo" << endl << endl;
		}
		else
		{
			if ((Suma_Vot3<Suma_Vot1) && (Suma_Vot3<Suma_Vot2) && (Suma_Vot3<Suma_Vot4) && (Suma_Vot3<Suma_Vot5))
			{
				cout << "El candidato con menos votos es: Martha" << endl << endl;
			}
			else
			{
				if ((Suma_Vot4<Suma_Vot1) && (Suma_Vot4<Suma_Vot2) && (Suma_Vot4<Suma_Vot3) && (Suma_Vot4<Suma_Vot5))
				{
					cout << "El candidato con menos votos es: Juan" << endl << endl;
				}
				else
				{
					if ((Suma_Vot5<Suma_Vot1) && (Suma_Vot5<Suma_Vot2) && (Suma_Vot5<Suma_Vot3) && (Suma_Vot5<Suma_Vot4))
					{
						cout << "El voto en blanco fue quién tuvo la menor cantidad de votos" << endl << endl;
					}
					else
					{
						cout << "Hubo un empate en quiene obtuvo la menor cantidad de votos" << endl << endl;
					}
				}
			}
		}
	}
	
	system ("pause");
	
	return EXIT_SUCCESS;
}
*/
/*
int main ()
{
	//Variables
		float Hora;
		int Suma_Vot1, Suma_Vot2, Suma_Vot3, Suma_Vot4, Suma_Vot5;
		char Cand;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	cout << "¿Qué hora es? (Ejemplo: 09:05 = 09.05): ";
	cin >> Hora;
	fflush (stdin);
	cout << endl;
	
	Suma_Vot1 = 0;
	Suma_Vot2 = 0;
	Suma_Vot3 = 0;
	Suma_Vot4 = 0;
	Suma_Vot5 = 0;
	
	for (Hora=00.00; Hora<=16.00; Hora)
	{
		cout << "Ingrese el candidato por el cual desea votar (1=Pedro, 2=Pablo, 3=Martha, 4=Juan y 5=Voto en blanco): ";
		cin >> Cand;
		fflush (stdin);
		
		SUMA_VOTOS (Cand, Suma_Vot1, Suma_Vot2, Suma_Vot3, Suma_Vot4, Suma_Vot5);
		
		cout << "¿Qué hora es?: ";
		cin >> Hora;
		fflush (stdin);
		cout << endl;
	}
	
	if ((Suma_Vot1>Suma_Vot2) && (Suma_Vot1>Suma_Vot3) && (Suma_Vot1>Suma_Vot4) && (Suma_Vot1>Suma_Vot5))
	{
		cout << "El candidato ganador es: Pedro" << endl << endl;
	}
	else
	{
		if ((Suma_Vot2>Suma_Vot1) && (Suma_Vot2>Suma_Vot3) && (Suma_Vot2>Suma_Vot4) && (Suma_Vot2>Suma_Vot5))
		{
			cout << "El candidato ganador es: Pablo" << endl << endl;
		}
		else
		{
			if ((Suma_Vot3>Suma_Vot1) && (Suma_Vot3>Suma_Vot2) && (Suma_Vot3>Suma_Vot4) && (Suma_Vot3>Suma_Vot5))
			{
				cout << "La candidata ganadora es: Martha" << endl << endl;
			}
			else
			{
				if ((Suma_Vot4>Suma_Vot1) && (Suma_Vot4>Suma_Vot2) && (Suma_Vot4>Suma_Vot3) && (Suma_Vot4>Suma_Vot5))
				{
					cout << "El candidato ganador es: Juan" << endl << endl;
				}
				else
				{
					if ((Suma_Vot5>Suma_Vot1) && (Suma_Vot5>Suma_Vot2) && (Suma_Vot5>Suma_Vot3) && (Suma_Vot5>Suma_Vot4))
					{
						cout << "Gano el Voto en blanco" << endl << endl;
					}
					else
					{
						cout << "Hubo un empate en quién obtuvo la mayor cantidad de votos" << endl << endl;
					}
				}
			}
		}
	}
	
	cout << "La cantidad de votos de el candidato Pedro son: " << Suma_Vot1 << endl;
	cout << "La cantidad de votos de el candidato Pablo son: " << Suma_Vot2 << endl;
	cout << "La cantidad de votos de el candidato Martha son: " << Suma_Vot3 << endl;
	cout << "La cantidad de votos de el candidato Juan son: " << Suma_Vot4 << endl;
	cout << "La cantidad de votos para el Voto en blanco fue: " << Suma_Vot5 << endl << endl;
	
	if ((Suma_Vot1<Suma_Vot2) && (Suma_Vot1<Suma_Vot3) && (Suma_Vot1<Suma_Vot4) && (Suma_Vot1<Suma_Vot5))
	{
		cout << "El candidato con menos votos es: Pedro" << endl << endl;
	}
	else
	{
		if ((Suma_Vot2<Suma_Vot1) && (Suma_Vot2<Suma_Vot3) && (Suma_Vot2<Suma_Vot4) && (Suma_Vot2<Suma_Vot5))
		{
			cout << "El candidato con menos votos es: Pablo" << endl << endl;
		}
		else
		{
			if ((Suma_Vot3<Suma_Vot1) && (Suma_Vot3<Suma_Vot2) && (Suma_Vot3<Suma_Vot4) && (Suma_Vot3<Suma_Vot5))
			{
				cout << "El candidato con menos votos es: Martha" << endl << endl;
			}
			else
			{
				if ((Suma_Vot4<Suma_Vot1) && (Suma_Vot4<Suma_Vot2) && (Suma_Vot4<Suma_Vot3) && (Suma_Vot4<Suma_Vot5))
				{
					cout << "El candidato con menos votos es: Juan" << endl << endl;
				}
				else
				{
					if ((Suma_Vot5<Suma_Vot1) && (Suma_Vot5<Suma_Vot2) && (Suma_Vot5<Suma_Vot3) && (Suma_Vot5<Suma_Vot4))
					{
						cout << "El voto en blanco fue quién tuvo la menor cantidad de votos" << endl << endl;
					}
					else
					{
						cout << "Hubo un empate en quiene obtuvo la menor cantidad de votos" << endl << endl;
					}
				}
			}
		}
	}
	
	system ("pause");
	
	return EXIT_SUCCESS;
}
*/

void SUMA_VOTOS (char &Can, int &Suma1, int &Suma2, int &Suma3, int &Suma4, int &Suma5)
{
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	switch (Can)
		{
			case '1':	Suma1++;
					
						break;	
			case '2':	Suma2++;
					
						break;
			case '3':	Suma3++;
			
						break;
			case '4':	Suma4++;
					
						break;
			case '5':	Suma5++;
					
						break;
		}
		
	system ("pause");
}




































