#include <iostream>

int main() {
	int numero;
	
	// Solicitar al usuario que ingrese un n�mero
	std::cout << "Ingrese un n�mero entero: ";
	std::cin >> numero;
	
	// Verificar si el n�mero es par o impar
	if (numero % 2 == 0) {
		std::cout << numero << " es un n�mero par." << std::endl;
	} else {
		std::cout << numero << " es un n�mero impar." << std::endl;
	}
	
	return 0;
}
