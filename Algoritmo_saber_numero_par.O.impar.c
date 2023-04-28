/*
	Name: Algoritmo_saber_numero_par.O.impar
	Copyright: 
	Author: María José Arcila Cano
	Date: 25/06/22 16:09
	Description: 
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <math.h>
# include <string.h>

int main ()
{
	//Variables
		int Num1, Num2, Num3;
		
	system ("cls");
	setlocale (LC_ALL, "Spanish");
	
	printf ("Ingrese el primer número: ");
	scanf ("%d", &Num1);
	fflush (stdin);
	printf ("Ingrese el segundo número: ");
	scanf ("%d", &Num2);
	fflush (stdin);
	printf ("Ingrese el tercer número: ");
	scanf ("%d", &Num3);
	fflush (stdin);
	
	if ((Num1==Num2) && (Num1>=0) && (Num2>=0))
	{
		printf ("El primer y segundo número hacen pareja positiva\n\n");
	}
	else
	{
		if ((Num1==Num3) && (Num1>=0) && (Num3>=0))
		{
			printf ("El primer y tercer número hacen pareja positiva\n\n");
		}
		else
		{
			if ((Num2==Num3) && (Num2>=0) && (Num3>=0))
			{
				printf ("El segundo y tercer número hacen pareja positiva\n\n");
			}
			else
			{
				if ((Num1==Num2) && (Num1<0) && (Num2<0))
				{
					printf ("El primer y segundo número hacen pareja negativa\n\n");
				}
				else
				{
					if ((Num1==Num3) && (Num1<0) && (Num3<0))
					{
						printf ("El primer y tercer número hacen pareja negativa\n\n");
					}	
					else
					{
						if ((Num2==Num3) && (Num2<0) && (Num3<0))
						{
							printf ("El segundo y tercer número hacen pareja negativa\n\n");
						}
						else
						{
							printf ("Ingrese dos números iguales para poder identificar que tipo de pareja harían\n\n");
						}
					}
				}
			}
		}
	}	
	
	system ("pause");
	
	return 0;
}


























