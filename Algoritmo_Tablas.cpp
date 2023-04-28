
/*
	Name: Algoritmo tablas
	Copyright: 
	Author: Santiago E.
	Date: 01/07/22 23:38
	Description: 
*/

# include <iostream>
# include <stdlib.h>

using namespace std;

int main()
{
	//Variables
		int num1, num2, i;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	cout << "Escriba un número: ";
	cin >> num1;
	fflush (stdin);
	cout << "Escriba otro: ";
	cin >> num2;
	fflush (stdin);
		
	i=1;
		while (i<=10){
			
			cout<< "las tablas de "<<num1<<" x "<<i<<" es "<<(num1*i)<<endl;
			i++;
		}
		/*
		if (i>num2){
			cout<< "las tablas de "<<num2<<" x "<<i<<" es "<<(num2*i)<<endl;
			i--;
		}
		*/
	return EXIT_SUCCESS;
}




































