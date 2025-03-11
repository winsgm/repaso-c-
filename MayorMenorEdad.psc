//ANALISIS:
//definir problema: deteeminar el maoyr y menor de 3 edades dadas por el usuario 
//datos de entrada: edad1, edad2, edad3, mayor, menor Como Entero
//informacion de salida: mayor, edad,_1, menor, edad_1 como enteros  
//variables:edad1, edad2, edad3, mayor, menor como enteros 
//DISEÑO:
//dividir el problema en partes simples 
//pedir al usurario ingresar 3 edades
//validar si todas las edades son mayores de 18 años 
//encontrar el mayor 
//encontrar el menor 
//mostrar resultados 

Algoritmo MayorMenorEdad

    Definir edad1, edad2, edad3, mayor, menor Como Entero

    Escribir "Ingrese la primera edad:"
    Leer edad1
    Escribir "Ingrese la segunda edad:" 
    Leer edad2
    Escribir "Ingrese la tercera edad:" 
    Leer edad3

    Si edad1 >= 18 y edad2 >= 18 y edad3 >= 18 Entonces
        Escribir "Todas las edades son mayores de 18 años." 
    Sino
        Escribir "Al menos una de las edades no es mayor de 18 años." 
    FinSi

    Si edad1 >= edad2 y edad1 >= edad3 Entonces
        mayor = edad1
    Sino
        Si edad2 >= edad3 Entonces
            mayor = edad2
        Sino
            mayor = edad3
        FinSi
    FinSi

    Si edad1 <= edad2 y edad1 <= edad3 Entonces
        menor = edad1
    Sino
        Si edad2 <= edad3 Entonces
            menor = edad2
        Sino
            menor = edad3
        FinSi
    FinSi

    Escribir "La mayor edad es:", mayor
    Escribir "La menor edad es:", menor
	
FinAlgoritmo
