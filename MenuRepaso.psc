//analisis 
//definicion de problema: hacer un menu que dao un numero del usurario seleccione una opcion
//datos de entrada: num1, num2 como entero 
//informacion de salida: num1, num2, resultado Como entero
// variables : num1, num2, resultado
//DISEÑO 
//pedir al usuario que seleccione una opcion 
//pedir al usuario que ingrese las cantidades que desea ralizar segun la opcion seleccionada 
//se muestra los resultados 
//se preciona una tecla nuevamente si desea realizar otra operacion hasta que el usuario seleccione la opcion 0

Algoritmo MenuRepaso
    Definir opcion, num1, num2, resultado Como entero 
    Repetir
        Escribir "Menu Repaso"
        Escribir "1. Sumar"
        Escribir "2. Multiplicar"
        Escribir "3. Dividir"
        Escribir "4. Ingresar números"
        Escribir "0. Salir del programa"
        Escribir "Ingrese su opción: "
        Leer opcion
		
        Segun opcion Hacer
            1:
                Escribir "Ingrese el primer número: "
                Leer num1
                Escribir "Ingrese el segundo número: "
                Leer num2
                resultado = num1 + num2
                Escribir "La suma es: ", resultado
            2:
                Escribir "Ingrese el primer número: "
                Leer num1
                Escribir "Ingrese el segundo número: "
                Leer num2
                resultado = num1 * num2
                Escribir "La multiplicación es: ", resultado
				
            3:
                Escribir "Ingrese el numerador: "
                Leer num1
                Escribir "Ingrese el denominador: "
                Leer num2
                Si num2 <> 0 Entonces
                    resultado = num1 / num2
                    Escribir "La división es: ", resultado
                Sino
                    Escribir "No se puede dividir por cero."
                FinSi
            4:
                Escribir "Ingrese el primer número: "
                Leer num1
                Escribir "Ingrese el segundo número: "
                Leer num2
            0:
                Escribir "Saliendo del programa."
            De Otro Modo:
                Escribir "Opción no válida. Intente de nuevo."
        FinSegun
		Esperar Tecla
		Limpiar Pantalla 
    Hasta Que opcion = 0

FinAlgoritmo