/*
	Name: Trabajo Independiente CUATRO
	Copyright: 
	Author: María José Arcila Cano
	Date: 11/05/22 11:26
	Description: 
*/

/*ANÁLISIS

 Datos de entrada: Tipo de inmueble                                  Tip_In
                   Metros cuadrados del inmueble                     Mts
                   Estrato                                           Estrato
                   Cantidad de personas que viven en el predio       Cant_Per
                   Numero de hombres que viven en el predio             Nr_H
                   Numero de mujeres que viven en el predio             Nr_M
 Datos de salida:  Facturación                                       Fact
                   Gasto de administración                           Gasto_Admin
                   Gasto de aseo                                     Gasto_Aseo
                   Gasto en gimnasio                                 Gasto_Gim
 Datos auxiliares: 10% de la cuota de administración                 Admin_10
                  
 Especificaciones
   Pre-especificaciones: Tip_In E {Cadena = "Apartamento", "Casa"}
                         Mts E {Entero > 0 AND <= 1,000.000}
                         Estrato E {Carácter = '1', '2', '3', '4', '5', '6'}
                         Cant_Per E {Entero > 0 AND <= 1000}
                         Nr_H E {Entero >= 0 AND <= 1000}
                         Nr_M E {Entero >= 0 AND <= 1000} 
   Post-especificaciones: Fact E {Entero}
                          Gasto_Admin E {Entero}
                          Admin_10 E {Entero}
                          Gasto_Aseo E {Entero}
                          Gasto en gimnasio E {Entero}
                          
Procesos
 Gasto_Admin <-- (Mts*1.500)+5000               Cuando Tip_In = "Apartamento"
 Gasto_Admin <-- (Mts*2.500)+10.000             Cuando Tip_In = "Casa"
 Admin_10 <-- (Gasto_Admin*0.1)+(1000*Mts)      Cuando Estrato = 1, 2, 3
 Admin_10 <-- (Gasto_Admin*0.1)+(2000*Mts)      Cuando Estrato = 4, 5, 6
 Gasto_Gim <-- 30.000                           Cuando Cant_Per = 1
 Gasto_Gim <-- 25.000*2                         Cuando Cant_Per = 2
 Gasto_Gim <-- 20.000*3                         Cuando Cant_Per = 3
 Gasto_Gim <-- 15.000*4                         Cuando Cant_Per = 4
 Gasto_Gim <-- 10.000*5                         Cuando Cant_Per = 5
 Gasto_Gim <-- 5.000*Nr_H                       Cuando Cant_Per >= 6 AND Nr_H >= 6
 Gasto_Gim <-- 4.000*Nr_M                       Cuando Cant_Per >= 6 AND Nr_M >= 6
 Facturación <-- Gasto_Admin+Gasto_Asea+Gasto_Gim
 
 
 
 
 
 
 
 
 
 
 
