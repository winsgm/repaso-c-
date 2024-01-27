//de: wisnton garrido monta�o
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funciones prototipo
int generarNumeroEntre0y500();
float generarNumeroReal();
bool esPrimo(int numero);
void generarNPrimos(int N);

int main() {
	// Semilla para n�meros aleatorios
	srand(time(0));
	
	char opcion;
	do {
		// Men� de opciones
		cout << "(1) Generar n�mero entre 0-500\n";
		cout << "(2) Generar n�mero real\n";
		cout << "(3) Generar N n�meros primos\n";
		cout << "(s/S) Salir\n";
		cout << "Seleccione una opci�n: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			// Generar y mostrar n�mero aleatorio entre 0 y 500
			cout << "N�mero generado: " << generarNumeroEntre0y500() << endl;
			break;
		case '2':
			// Generar y mostrar n�mero real aleatorio
			cout << "N�mero real generado: " << generarNumeroReal() << endl;
			break;
		case '3':
			int N;
			// Pedir al usuario la cantidad de n�meros primos a generar
			cout << "Ingrese la cantidad de n�meros primos a generar: ";
			cin >> N;
			// Generar y mostrar N n�meros primos
			generarNPrimos(N);
			break;
		case 's':
		case 'S':
			// Salir del programa
			cout << "Saliendo del programa.\n";
			break;
		default:
			// Opci�n inv�lida
			cout << "Opci�n no v�lida. Intente de nuevo.\n";
		}
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}

// Funci�n para generar n�mero aleatorio entre 0 y 500
int generarNumeroEntre0y500() {
	return rand() % 501;
}

// Funci�n para generar n�mero real aleatorio
float generarNumeroReal() {
	return static_cast<float>(rand()) / RAND_MAX;
}

// Funci�n para verificar si un n�mero es primo
bool esPrimo(int numero) {
	if (numero < 2) {
		return false;
	}
	for (int i = 2; i <= numero / 2; ++i) {
		if (numero % i == 0) {
			return false;
		}
	}
	return true;
}

// Funci�n para generar N n�meros primos
void generarNPrimos(int N) {
	int contador = 0;
	int numeroActual = 2;
	
	while (contador < N) {
		if (esPrimo(numeroActual)) {
			cout << numeroActual << " ";
			++contador;
		}
		++numeroActual;
	}
	cout << endl;
}
