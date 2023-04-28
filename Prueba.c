# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>

int main ()
{
	//Variables
		int Letra;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	printf ("Ingresa una letra: \n");
	Letra = getc (stdin);
	fflush (stdin);
	
	printf ("Bien, has aprendido a leer un carácter: %c\n\n", Letra);
	
	system ("pause");
	
	return 0;
	
}
