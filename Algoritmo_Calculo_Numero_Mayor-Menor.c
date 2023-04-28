/*
	Name: Algoritmo descuento compra
	Copyright: 
	Author: Maria Jose Arcila Cano
	Date: 26/04/22 20:48
	Description:
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>

int main ()
{
	//Variables
		long NumA, NumB, NumC, NumM, Numm;
	
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese un primer número: ");
	scanf ("%ld", &NumA);
	fflush (stdin);
	printf ("Ingrese un segundo número: ");
	scanf ("%ld", &NumB);
	fflush (stdin);
	printf ("Ingrese un tercer número: ");
	scanf ("%ld", &NumC);
	fflush (stdin);
	
	if ((NumA>NumB) && (NumA>NumC))
	{
		NumM=NumA;
		
		if (NumB<NumC)
		{
			Numm=NumB;
		}
		else
		{
			Numm=NumC;
		}
	}
	else
	{
		if ((NumB>NumA) && (NumB>NumC))
		{
			NumM=NumB;
			
			if (NumA<NumC)
			{
				Numm=NumA;
			}
			else
			{
				Numm=NumC;
			}
		}
		else
		{
			if ((NumC>NumA) && (NumC>NumB))
			{
				NumM=NumC;
				
				if (NumA<NumB)
				{
					Numm=NumA;
				}
				else
				{
					Numm=NumB;
				}
			}
		}
	}
	
	printf ("El número mayor es %ld y el número menor es %ld\n\n", NumM, Numm);
	
	system ("pause");
	
	return 0;
}
