//de: winston garrido monta�o 
#include <iostream>
#include <string>

using namespace std;

// Variables globales
double numero1, numero2;

// Funciones
void mostrarMenuPrincipal();
void mostrarSubMenuNumeros();

int main() {
	// Declaraci�n de variables para las opciones del men�
	char opcionPrincipal, opcionNumeros;
	
	do {
		// Mostrar el men� principal y esperar la selecci�n del usuario
		mostrarMenuPrincipal();
		cin >> opcionPrincipal;
		
		switch (opcionPrincipal) {
		case '1':
			// Operaciones con n�meros
			mostrarSubMenuNumeros();
			cin >> opcionNumeros;
			
			switch (opcionNumeros) {
			case '1':
				// Suma de dos n�meros
				cout << "Ingrese dos n�meros para sumar: ";
				cin >> numero1 >> numero2;
				cout << "La suma es: " << numero1 + numero2 << endl;
				break;
			case '2':
				// Divisi�n de dos n�meros
				cout << "Ingrese dos n�meros para dividir: ";
				cin >> numero1 >> numero2;
				if (numero2 != 0) {
					cout << "La divisi�n es: " << numero1 / numero2 << endl;
				} else {
					cout << "No se puede dividir por cero." << endl;
				}
				break;
			case 'm':
			case 'M':
				// Volver al men� principal
				break;
			default:
				// Opci�n no v�lida en el submen� de n�meros
				cout << "Opci�n no v�lida." << endl;
				break;
			}
			break;
			
		case '2':
			// Concatenaci�n de dos cadenas
		{
			string cadena1, cadena2;
			cout << "Ingrese la primera cadena: ";
			cin >> cadena1;
			cout << "Ingrese la segunda cadena: ";
			cin >> cadena2;
			cout << "La concatenaci�n es: " << cadena1 + cadena2 << endl;
		}
		break;
		
		case 's':
		case 'S':
			// Salir del programa
			cout << "Saliendo del programa." << endl;
			break;
			
		default:
			// Opci�n no v�lida en el men� principal
			cout << "Opci�n no v�lida." << endl;
			break;
		}
		
	} while (opcionPrincipal != 's' && opcionPrincipal != 'S');
	
	return 0;
}

void mostrarMenuPrincipal() {
	// Mostrar el men� principal
	cout << "MENU PRINCIPAL" << endl;
	cout << "1)Operaciones con N�meros" << endl;
	cout << "2)Concatenar 2 cadenas." << endl;
	cout << "S)Salir" << endl;
	cout << "Seleccione una opci�n: ";
}

void mostrarSubMenuNumeros() {
	// Mostrar el submen� de operaciones con n�meros
	cout << "SUBMENU OP NUMEROS" << endl;
	cout << "1)Suma de 2 n�meros." << endl;
	cout << "2)Divisi�n de 2 n�meros." << endl;
	cout << "M)Volver al Menu principal" << endl;
	cout << "Seleccione una opci�n: ";
}
