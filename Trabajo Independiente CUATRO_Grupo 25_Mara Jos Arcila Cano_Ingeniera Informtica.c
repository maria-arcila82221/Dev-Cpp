/*
	Name: Trabajo Independiente CUATRO
	Copyright: 
	Author: María José Arcila Cano
	Date: 11/05/22 11:26
	Description: 
*/


/*



ANÁLISIS

 Datos de entrada: Tipo de inmueble                                             Tip_In
                   Metros cuadrados del inmueble                                Mts
                   ---------------------------------------------------------------------
                   Estrato                                                      Estrato
                   ---------------------------------------------------------------------
                   Cantidad de personas que viven en el predio                  Cant_Per
                   Numero de hombres que viven en el predio                     Nr_H
                   Numero de mujeres que viven en el predio                     Nr_M
                   Respuesta a sí entrenan personas del predio en el gimnasio   Resp_PerEntreno_Gim
                   Respuesta a sí hay hombres en el predio                      Resp_HayH
                   Respuesta a sí hay mujeres en el predio                      Resp_HayM
                   Numero de personas del predio que van al gimnasio            NrPer_Gim
 Datos de salida:  Facturación                                                  Fact
                   Gasto de administración                                      Gasto_Admin
                   Gasto de aseo                                                Gasto_Aseo
                   Gasto en gimnasio                                            Gasto_Gim
 Datos auxiliares: Gasto en gimnasio de hombres                                 Gasto_GimH
                   Gasto en gimnasio de mujeres                                 Gasto_GimM
                  
 Especificaciones
   Pre-especificaciones: Tip_In E {Cadena [12] = "Apartamento", "Casa"}
                         Mts E {Real > 0 AND <= 1,000.000}
                         Estrato E {Carácter = '1', '2', '3', '4', '5', '6'}
                         Cant_Per E {Entero > 0 AND <= 1000}
                         Nr_H E {Entero >= 0 AND <= 1000}
                         Nr_M E {Entero >= 0 AND <= 1000} 
                         Resp_PerEntreno_Gim E {Carácter = 'S', 'N'}
                         Resp_HayH E {Carácter = 'S', 'N'}
                         Resp_HayM E {Carácter = 'S', 'N'}
                         NrPer_Gim E {Entero >=6 AND <1000}
   Post-especificaciones: Fact E {Entero}
                          Gasto_Admin E {Entero}
                          Gasto_Aseo E {Entero}
                          Gasto_Gim E {Entero}
                          Gasto_GimH E {Entero}
                          Gasto_GimM E {Entero}
                          
Procesos
 Gasto_Admin <-- (Mts*1.500)+5.000                 Cuando Tip_In = "Apartamento"
 Gasto_Admin <-- (Mts*2.500)+10.000               Cuando Tip_In = "Casa"
 --------------------------------------------------------------------------
 Gasto_Aseo <-- (Gasto_Admin*0.1)+(1.000*Mts)      Cuando Estrato = 1, 2, 3
 Gasto_Aseo <-- (Gasto_Admin*0.1)+(2.000*Mts)      Cuando Estrato = 4, 5, 6
 --------------------------------------------------------------------------
 Gasto_Gim <-- 0                                  Cuando Resp_PerEntreno_Gim = 'N'
 Gasto_Gim <-- 30.000                             Cuando Resp_PerEntreno_Gim = 'S', Cant_Per = 1
 Gasto_Gim <-- 25.000*NrPer_Gim                   Cuando Resp_PerEntreno_Gim = 'S', Cant_Per = 2
 Gasto_Gim <-- 20.000*NrPer_Gim                   Cuando Resp_PerEntreno_Gim = 'S', Cant_Per = 3
 Gasto_Gim <-- 15.000*NrPer_Gim                   Cuando Resp_PerEntreno_Gim = 'S', Cant_Per = 4
 Gasto_Gim <-- 10.000*NrPer_Gim                   Cuando Resp_PerEntreno_Gim = 'S', Cant_Per = 5
 Gasto_GimH <-- 5.000*Nr_H                        Cuando Resp_PerEntreno_Gim = 'S', Cant_Per >= 6, Resp_HayH = 'S'
 Gasto_GimH <-- 0                                 Cuando Resp_PerEntreno_Gim = 'S', Cant_Per >= 6, Resp_HayH = 'N'
 Gasto_GimM <-- 4.000*Nr_M                        Cuando Resp_PerEntreno_Gim = 'S', Cant_Per >= 6, Resp_HayM = 'S'
 Gasto_GimM <-- 0                                 Cuando Resp_PerEntreno_Gim = 'S', Cant_Per >= 6, Resp_HayM = 'N'
 Gasto_Gim <-- Gasto_GimH+Gasto_GimM              Cuando Resp_PerEntreno_Gim = 'S', Cant_Per >= 6
 -------------------------------------------------------------------------------------------------
 Fact <-- Gasto_Admin+Gasto_Aseo+Gasto_Gim
 
 
DISEÑO

Algoritmo_Calculo_Factura

Inicio
	Variables
		Entero: Cant_Per, Nr_H, Nr_M, NrPer_Gim, Fact, Gasto_Admin, Gasto_Aseo, Gasto_Gim, Gasto_GimH, Gasto_GimM
		Real: Mts
		Cadena: Tip_In
		Carácter: Estrato, Resp_PerEntreno_Gim, Resp_HayH, Resp_HayM
		
	Escribir ("Ingrese el tipo de inmueble; Apartamento o Casa según corresponda, recuerde hacer buen uso de mayúsculas y minúsculas: ")
	Leer (Tip_In)
	
	Si ((Tip_In != "Apartamento") AND (Tip_In != "Casa")) Entonces
		
		Escribir ("Dato inválido, por favor ingrese la palabra Casa o Apartamento dependiendo del tipo de inmueble del que sea el predio. Recuerde emplear bien mayúsculas y minúsculas: ")
		Leer (Tip_In)
	
	Escribir ("Ingrese la cantidad de metros cuadrados que posee su inmueble sin la unidad de medida, solo el número: ")
	Leer (Mts)
	
	Si (Tip_In = "Apartamento") Entonces
		Gasto_Admin <-- (Mts*1.500)+5.000
	si_no
		Si (Tip_In = "Casa") Entonces
			Gasto_Admin <-- (Mts*2.500)+10.000
		fin_si
	fin_si
	
	Escribir ("El valor de la cuota del gasto en administración del predio es: ", Gasto_Admin)
	
	-------------------------------------------------------------------------------------------
	
	Escribir ("Ingrese el número de estrato en que se encuentra el predio, de 1 a 6: ")
	Leer (Estrato)
	
	Si  (Estrato = 1) Entonces
	
		Gasto_Aseo <-- (Gasto_Admin*0.1)+(1.000*Mts)
		
	si_no
	
		Si  (Estrato = 2) Entonces
		
			Gasto_Aseo <-- (Gasto_Admin*0.1)+(1.000*Mts)
			
		si_no
		
			Si  (Estrato = 3) Entonces
			
 				Gasto_Aseo <-- (Gasto_Admin*0.1)+(1.000*Mts)
 				
 			si_no
 			
 				Si  (Estrato = 4) Entonces
 				
 					Gasto_Aseo <-- (Gasto_Admin*0.1)+(2.000*Mts)
 					
 				si_no
 				
 					Si  (Estrato = 5) Entonces
 					
					 	Gasto_Aseo <-- (Gasto_Admin*0.1)+(2.000*Mts)
					 	
					si_no
					
						Si  (Estrato = 6) Entonces
						
							Gasto_Aseo <-- (Gasto_Admin*0.1)+(2.000*Mts)
							
						fin_si
						
					fin_si
					
				fin_si
				
			fin_si
			
		fin_si
		
	fin_si
	
	Escribir ("El valor de la cuota del gasto en aseo del predio es: ", Gasto_Aseo)
	
	--------------------------------------------------------------------------------
	
	Escribir ("Responda S sí hay personas del predio que entrenan en el gimnasio, en caso contrario, coloque N; recuerde diferenciar entre mayúsculas y minúsculas: ")
	Leer (Resp_PerEntreno_Gim)
	
	Si (Resp_PerEntreno_Gim = 'N')
	
		Gasto_Gim <-- 0
		
	si_no
	
		Si (Resp_PerEntreno_Gim = 'S')
		
			Escribir ("Ingrese la cantidad de personas que viven en el predio: ")
			Leer (Cant_Per)
			Escribir ("Ingrese la cantidad de personas del predio que van al gimnasio: ")
			Leer (NrPer_Gim)
			
			Casos_de (Cant_Per) Hacer
			
				Caso 1: Gasto_Gim <-- 30.000
						Salir
				Caso 2: Gasto_Gim <-- 25.000*NrPer_Gim
						Salir
				Caso 3: Gasto_Gim <-- 20.000*NrPer_Gim
						Salir
				Caso 4: Gasto_Gim <-- 15.000*NrPer_Gim 
						Salir
				Caso 5: Gasto_Gim <-- 10.000*NrPer_Gim
						Salir
						
				De otro modo
					
					Si (Cant_Per >= 6) Entonces
					
						Escribir ("Ingrese S sí se encuentran hombres en el predio, o N en caso contrario; recuerde diferenciar entre mayúsculas y minúsculas: ")
						Leer (Resp_HayH)
				
						Si (Resp_HayH = 'S') Entonces
						
							Escribir ("Ingrese el número de hombres que hay en el predio: ")
							Leer ("Nr_H")
							
							Gasto_GimH <-- 5.000*Nr_H
							
						si_no
							
							Si (Resp_HayH = 'N') Entonces
							
								Gasto_GimH <-- 0
								
							fin_si
						
						fin_si
						
						Escribir ("Ingrese S sí se encuentran mujeres en el predio, o N en caso contrario; recuerde diferenciar entre mayúsculas y minúsculas: ")
						Leer (Resp_HayM)
						
						Si (Resp_HayM = 'S') Entonces
						
							Escribir ("Ingrese el número de mujeres que hay en el predio: ")
							Leer ("Nr_M")
						
							Gasto_GimM <-- 4.000*Nr_M
							
						si_no
						
							Si (Resp_HayM = 'N') Entonces
							
								Gasto_GimM <-- 0
								
							fin_si
							
						fin_si
						
					fin_si
					
					Gasto_Gim <-- Gasto_GimH+Gasto_GimM
					
				Salir
				
			fin_casos
			
		fin_si
		
	fin_si
	
	Escribir ("El valor de la cuota del gasto en gimnasio del predio es: ", Gasto_Gim) 
	
	-----------------------------------------------------------------------------------
	
	Fact <-- Gasto_Admin+Gasto_Aseo+Gasto_Gim
	
	Escribir ("El valor de la cuota de todos los servicios, o sea, el total de facturación es: ", Fact)
	
	
	
VERIFICACIÓN

Impresiones                                                                                                               		Tip_In			Mts 		Gasto_Admin 	||	Estrato 		Gasto_Aseo 	|| 	Resp_PerEntreno_Gim 		Cant_Per		NrPer_Gim 		Gasto_Gim 		Fact 		 		                                                              	

"Ingrese el tipo de inmueble; Apartamento o Casa según corresponda, recuerde hacer buen uso de mayúsculas y minúsculas: "      Apartamento      

"Ingrese la cantidad de metros cuadrados que posee su inmueble sin la unidad de medida, solo el número: "                                       99                                     

"El valor de la cuota del gasto en administración del predio es: "                                                                                            153.500

-------------------------------------------------------------------------

"Ingrese el número de estrato en que se encuentra el predio, de 1 a 6: "                                                                                                          1        

"El valor de la cuota del gasto en aseo del predio es: "                                                                                                                                         114.350                                   

----------------------------------------------------------------------------------------------------

"Responda S sí hay personas del predio que entrenan en el gimnasio, en caso contrario, coloque N: "                                                                                                                    S

"Ingrese la cantidad de personas que viven en el predio: "                                                                                                                                                                                     3

"Ingrese la cantidad de personas del predio que van al gimnasio: "                                                                                                                                                                                               2                     

"El valor de la cuota del gasto en gimnasio del predio es: "                                                                                                                                                                                                                  40.000

"El valor de la cuota de todos los servicios, o sea, el total de facturación es: "                                                                                                                                                                                                        307.350



CODIFICACIÓN
			
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <wchar.h>
# include <string.h>

int main ()
{
	//Variables
		int Cant_Per, Nr_H, Nr_M, NrPer_Gim, Fact, Gasto_Admin, Gasto_Aseo, Gasto_Gim, Gasto_GimH, Gasto_GimM;
		float Mts;
		char Tip_In[20];
		char Estrato, Resp_PerEntreno_Gim, Resp_HayH, Resp_HayM;
		
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	system ("cls");
	setlocale (LC_ALL, "Spanish");
		
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
					
	printf ("Ingrese el tipo de inmueble; Apartamento o Casa según corresponda, recuerde hacer buen uso de mayúsculas y minúsculas: \n");
	gets (Tip_In);
	fflush (stdin);
	
	if ((strcmp(Tip_In, "Apartamento")!=0) && (strcmp (Tip_In, "Casa")!=0))
	{
		printf ("Dato inválido, por favor ingrese la palabra Casa o Apartamento dependiendo del tipo de inmueble del que sea el predio. Recuerde emplear bien mayúsculas y minúsculas: \n");
		gets (Tip_In);
		fflush (stdin);
	}
	
	printf ("Ingrese la cantidad de metros cuadrados que posee su inmueble sin la unidad de medida, solo el número: \n");
	scanf ("%f", &Mts);
	fflush (stdin);
	
	if ((strcmp(Tip_In, "Apartamento")==0) && (strcmp (Tip_In, "Casa")==0))
	{
		Gasto_Admin=(Mts*1500)+5000;
	}
	else
	{
		if ((strcmp (Tip_In, "Casa")==0))
		{
			Gasto_Admin=(Mts*2500)+10000;
		}
	}
	
	printf ("El valor de la cuota del gasto en administración del predio es: %d\n\n", Gasto_Admin);
	
	///////////////////////////////////////////////////////////////////////////////////////////////
	
	printf ("Ingrese el número de estrato en que se encuentra el predio, de 1 a 6: \n");
	scanf ("%c", &Estrato);
	fflush (stdin);
	
	if (Estrato == '1')
	{
		Gasto_Aseo = (Gasto_Admin*0.1)+(1000*Mts);
	}
	else
	{
		if (Estrato == '2')
		{
			Gasto_Aseo = (Gasto_Admin*0.1)+(1000*Mts);
		}
		else
		{
			if (Estrato == '3')
			{
 				Gasto_Aseo = (Gasto_Admin*0.1)+(1000*Mts);
 			}
 			else
 			{
 				if (Estrato == '4')
 				{
 					Gasto_Aseo = (Gasto_Admin*0.1)+(2000*Mts);
 				}
 				else
 				{
 					if (Estrato == '5')
 					{
					 	Gasto_Aseo = (Gasto_Admin*0.1)+(2000*Mts);
					}
					else
					{
						if (Estrato == '6')
						{
							Gasto_Aseo = (Gasto_Admin*0.1)+(2000*Mts);
						}
						
					}
					
				}
				
			}
			
		}
		
	}
	
	printf ("El valor de la cuota del gasto en aseo del predio es: %d\n\n", Gasto_Aseo);
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	printf ("Responda S sí hay personas del predio que entrenan en el gimnasio, en caso contrario, coloque N; recuerde diferenciar entre mayúsculas y minúsculas: \n");
	scanf ("%c", &Resp_PerEntreno_Gim);
	fflush (stdin);
	
	if (Resp_PerEntreno_Gim == 'N')
	{	
		Gasto_Gim = 0;
	}
	else
	{
		if (Resp_PerEntreno_Gim == 'S')
		{
			printf ("Ingrese la cantidad de personas que viven en el predio: \n");
			scanf ("%d", &Cant_Per);
			fflush (stdin);

			switch (Cant_Per)
			{
				case 1 :	Gasto_Gim = 30000;
							break;
				case 2 :	printf ("Ingrese la cantidad de personas del predio que van al gimnasio: \n");
							scanf ("%d", &NrPer_Gim);
							fflush (stdin);
							Gasto_Gim = 25000*NrPer_Gim;
							break;
				case 3 :	printf ("Ingrese la cantidad de personas del predio que van al gimnasio: \n");
							scanf ("%d", &NrPer_Gim);
							fflush (stdin);
							Gasto_Gim = 20000*NrPer_Gim;
							break;
				case 4 :	printf ("Ingrese la cantidad de personas del predio que van al gimnasio: \n");
							scanf ("%d", &NrPer_Gim);
							fflush (stdin);
							Gasto_Gim = 15000*NrPer_Gim;
							break;
				case 5 :	printf ("Ingrese la cantidad de personas del predio que van al gimnasio: \n");
							scanf ("%d", &NrPer_Gim);
							fflush (stdin);
							Gasto_Gim = 10000*NrPer_Gim;
							break;
				default :	if (Cant_Per >= 6)
							{
								printf ("Ingrese S sí se encuentran hombres en el predio, o N en caso contrario; recuerde diferenciar entre mayúsculas y minúsculas: \n");
								scanf ("%c", &Resp_HayH);
								fflush (stdin);
				
								if (Resp_HayH == 'S')
								{
									printf ("Ingrese el número de hombres que hay en el predio: \n");
									scanf ("%d", &Nr_H);
									fflush (stdin);
							
									Gasto_GimH = 5000*Nr_H;
								}
								else
								{
									if (Resp_HayH == 'N') 
									{
										Gasto_GimH = 0;
									}
								}
								
								printf ("Ingrese S sí se encuentran mujeres en el predio, o N en caso contrario; recuerde diferenciar entre mayúsculas y minúsculas: \n");
								scanf ("%c", &Resp_HayM);
								fflush (stdin);
						
								if (Resp_HayM == 'S')
								{
									printf ("Ingrese el número de mujeres que hay en el predio: \n");
									scanf ("%d", &Nr_M);
									fflush (stdin);
						
									Gasto_GimM = 4000*Nr_M;
								}
								else
								{
									if (Resp_HayM == 'N')
									{
										Gasto_GimM = 0;
									}
								}
							}
						Gasto_Gim = Gasto_GimH+Gasto_GimM;
				break;
			}
		}
	}

	printf ("El valor de la cuota del gasto en gimnasio del predio es: %d\n\n", Gasto_Gim);
	
	///////////////////////////////////////////////////////////////////////////////////////
	
	Fact = Gasto_Admin+Gasto_Aseo+Gasto_Gim;
	
	printf ("El valor de la cuota de todos los servicios, o sea, el total de facturación es: %d\n\n", Fact);
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	system ("pause");
	
 	return 0;
 	
}
 
 
 
 
