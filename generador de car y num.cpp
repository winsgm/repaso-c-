#include <iostream>
using namespace std;

char caracter[] = {'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int numero[10];
char c[10];

char generarCaracter(int index, char usedChars[]) {
	char nuevoChar;
	do {
		nuevoChar = caracter[rand() % 26];
	} while (usedChars[nuevoChar - 'a']); // Check if the character has already been used
	
	usedChars[nuevoChar - 'a'] = true; // Mark the character as used
	return nuevoChar;
}

int generarNumero() {
	return rand() % 51;
}

void imprimir() {
	cout << "CAR\tNUM" << endl;
	for (int i = 0; i < 10; i++)
		cout << c[i] << "\t" << numero[i] << endl;
}

void generarDatos() {
	char usedChars[26] = {false}; // Array to keep track of used characters
	
	for (int i = 0; i < 10; i++) {
		numero[i] = generarNumero();
		c[i] = generarCaracter(i, usedChars);
	}
}

int main() {
	generarDatos();
	imprimir();
	return 0;
}
