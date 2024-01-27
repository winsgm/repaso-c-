//de: winston garrido montaño 
#include <iostream>
#include <string>

using namespace std;

// Variables globales
double numero1, numero2;

// Funciones
void mostrarMenuPrincipal();
void mostrarSubMenuNumeros();

int main() {
	// Declaración de variables para las opciones del menú
	char opcionPrincipal, opcionNumeros;
	
	do {
		// Mostrar el menú principal y esperar la selección del usuario
		mostrarMenuPrincipal();
		cin >> opcionPrincipal;
		
		switch (opcionPrincipal) {
		case '1':
			// Operaciones con números
			mostrarSubMenuNumeros();
			cin >> opcionNumeros;
			
			switch (opcionNumeros) {
			case '1':
				// Suma de dos números
				cout << "Ingrese dos números para sumar: ";
				cin >> numero1 >> numero2;
				cout << "La suma es: " << numero1 + numero2 << endl;
				break;
			case '2':
				// División de dos números
				cout << "Ingrese dos números para dividir: ";
				cin >> numero1 >> numero2;
				if (numero2 != 0) {
					cout << "La división es: " << numero1 / numero2 << endl;
				} else {
					cout << "No se puede dividir por cero." << endl;
				}
				break;
			case 'm':
			case 'M':
				// Volver al menú principal
				break;
			default:
				// Opción no válida en el submenú de números
				cout << "Opción no válida." << endl;
				break;
			}
			break;
			
		case '2':
			// Concatenación de dos cadenas
		{
			string cadena1, cadena2;
			cout << "Ingrese la primera cadena: ";
			cin >> cadena1;
			cout << "Ingrese la segunda cadena: ";
			cin >> cadena2;
			cout << "La concatenación es: " << cadena1 + cadena2 << endl;
		}
		break;
		
		case 's':
		case 'S':
			// Salir del programa
			cout << "Saliendo del programa." << endl;
			break;
			
		default:
			// Opción no válida en el menú principal
			cout << "Opción no válida." << endl;
			break;
		}
		
	} while (opcionPrincipal != 's' && opcionPrincipal != 'S');
	
	return 0;
}

void mostrarMenuPrincipal() {
	// Mostrar el menú principal
	cout << "MENU PRINCIPAL" << endl;
	cout << "1)Operaciones con Números" << endl;
	cout << "2)Concatenar 2 cadenas." << endl;
	cout << "S)Salir" << endl;
	cout << "Seleccione una opción: ";
}

void mostrarSubMenuNumeros() {
	// Mostrar el submenú de operaciones con números
	cout << "SUBMENU OP NUMEROS" << endl;
	cout << "1)Suma de 2 números." << endl;
	cout << "2)División de 2 números." << endl;
	cout << "M)Volver al Menu principal" << endl;
	cout << "Seleccione una opción: ";
}
