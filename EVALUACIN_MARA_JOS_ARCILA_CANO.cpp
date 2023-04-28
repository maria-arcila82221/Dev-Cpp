/*
	Name: EVALUACIÓN
	Copyright: 
	Author: María José Arcila Cano
	Date: 29/06/22 10:08
	Description: 
*/

/* 
ANÁLISIS


D.E.
	Pregunta sí esta o no desempleado														Preg_Emp
	Estrato																					Estrato
	Hora																					Hora
	Tipo de tiquete a comprar																Tip_Tiq
	Estado civil del usuario																Est_Civ
	Edad del usuario 																		Edad
	Pregunta a sí quiere más tiquetes														Preg_Tiq

D.A.
	Valor tiquete																			Vr_Tiq
	Contador de personas																	Cont_Per

D.S.
	Valor auxilio recibido																	Vr_Aux
	Valor aporte de usuario																	Vr_Apor
	Valor a pagar para obtener un tiquete 													Vr_Tiq
	Dinero que debe dar la administracón municipal para completar los beneficios			Din_Admin
	Total de personas beneficiadas con el auxilio											Tot_Per
	Total de dinero que se dio en auxilos													TD_Aux
*/

/*
DISEÑO

Algoritmo_Aportes_Y_Beneficios

Inicio
	Variables
		Carácteres: Preg_Emp, Preg_Tq
		Reales: Hora
		Enteros: Vr_Tiq, Cont_Per, Vr_Aux, Vr_Apor, Vr_Tiq, Din_Admin, Tot_Per, TD_Aux, Edad, Estrato
		Cadenas: Tip_Tiq, Est_Civ
		
	Escribir ("¿Qué hora es? (Ingresarlo de manera que los dos puntos sean uno solo. Ejemplo: 12:04 = 12.04): ")
	Leer (Hora)
		
	Cont_Per <-- 0	
		
	Mientras (Hora>=05.00 AND Hora<=11.59) Hacer
		Escribir ("¿Cual es su edad?: ")
		Leer (Edad)
		Escribir ("¿Cual es su estrato? (De 1 a 6): ")
		Leer (Estrato)
		Escribir ("¿Esta desempleado? S si, N no: ")
		Leer (Preg_Emp)
		 
		Vr_Aux <-- AUXILIO (Edad, Estrato, Preg_Emp)
		
		Escribir ("¿En que suele montar? (Sencillo o integrado): ")
		Leer (Tip_Tiq)
		
		Si (Tip_Tiq = "Sencillo")
			Preg_Tq <--	'S'
			
			Mientras (Preg_Tq = 'S') Hacer
				Vr_Tiq = 1800
		
				Escribir ("¿Desea comprar otro tiquete?: ")
				Leer (Preg_Tq)
			fin_Mientras
		si_no
			Preg_Tq <--	'S'
			
				Mientras (Preg_Tq = 'S') Hacer
					Vr_Tiq = 2200
		
					Escribir ("¿Desea comprar otro tiquete?: ")
					Leer (Preg_Tq)
				fin_Mientras
				
		Cont_Per
	fin_Mientras
		
		
		
Fin

Entero_Funcion_AUXILIO (E, Est, Preg)
Inicio	 
	Variables
		Entero: Vr_A
		
	Si (Est<4 AND Preg=S)
		Casos_de (Est) Hacer
			caso 1:	Si (E<18) Entonces
						Vr_A = 180000
					si_no
						Vr_A =230000
					fin_si
						
					salir
			caso 2:	Si (E<18) Entonces
						Vr_A = 150000
					si_no
						Vr_A =200000
					fin_si
						
					salir
			caso 3:	Si (E<18) Entonces
						Vr_A = 120000
					si_no
						Vr_A =170000
					fin_si
						
					salir
		fin_Casos	
		
	Devolver (Vr_A)	
fin_AUXILIO			
*/

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
