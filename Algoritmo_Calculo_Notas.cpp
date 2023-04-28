/*
	Name: 
	Copyright: 
	Author: 
	Date: 25/05/22 10:47
	Description: 
*/

# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <locale.h>

using namespace std;

int main()
{
	// Variables
		float Nota, Sum_N, Prom;
		short Cont_N, Cont_E;
		char Resp;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	Cont_E = 0;
	
	while (Cont_E < 20)
	{
		Cont_N = 0;
		Sum_N = 0;
		Resp = 'S';
		
		while (Resp == 'S')
		{
			cout << "Ingrese la nota " << Cont_N+1 << " del estudiante #" << Cont_E+1 << ": ";
			cin >> Nota;
			fflush (stdin);
			
			Sum_N += Nota;
			Cont_N++;
			
			cout << "¿Desea ingresar otra nota? S si sí, o N en caso contrario. Recuerde diferenciar entre mayúsculas y minúsculas: ";
			cin >> Resp;
			fflush (stdin);
			
			while ((Resp != 'S') && (Resp != 'N'))
	    	{
				cout << "Ingrese una respuesta válida. S en caso de querer ingresar una nota, de lo contrario N; recuerde diferenciar entre mayúsculas y minúsculas: ";            
				cin >> Resp;
				fflush (stdin);
			}
		}
		
		Cont_E++;
		Prom = Sum_N/Cont_N;
		
		cout << "La nota promedio del semestre del estudiante #" << Cont_E << " es: " << Prom << endl;
		
	}
	
	system ("pause");
	
	return EXIT_SUCCESS;
}
