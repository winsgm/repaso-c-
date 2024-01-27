#include <iostream>
#include <string>
using namespace std;

// Funci�n para solicitar el nombre completo al usuario
string solicitarNombreCompleto() {
	cout << "Ingrese el nombre completo: ";
	string nombreCompleto;
	getline(cin, nombreCompleto);
	return nombreCompleto;
}

// Funci�n para extraer apellidos y nombre
void extraerNombres(const string& nombreCompleto, string& nombre, string& apellidoPaterno, string& apellidoMaterno) {
	size_t primerEspacio = nombreCompleto.find(' ');  // Encontrar �ndice del primer espacio
	size_t segundoEspacio = nombreCompleto.find(' ', primerEspacio + 1);  // Encontrar �ndice del segundo espacio
	
	// Extraer partes del nombre completo utilizando los �ndices de los espacios
	nombre = nombreCompleto.substr(0, primerEspacio);
	apellidoPaterno = nombreCompleto.substr(primerEspacio + 1, segundoEspacio - primerEspacio - 1);
	apellidoMaterno = nombreCompleto.substr(segundoEspacio + 1);
}

// Funci�n para convertir la primera letra de cada palabra a may�scula
void capitalizarNombres(string& nombre, string& apellidoPaterno, string& apellidoMaterno) {
	// Convertir la primera letra de cada palabra a may�scula
	nombre[0] = toupper(nombre[0]);
	apellidoPaterno[0] = toupper(apellidoPaterno[0]);
	apellidoMaterno[0] = toupper(apellidoMaterno[0]);
}

// Funci�n principal
int main() {
	// Solicitar el nombre completo al usuario
	string nombreCompleto = solicitarNombreCompleto();
	
	string nombre, apellidoPaterno, apellidoMaterno;
	// Extraer apellidos y nombre
	extraerNombres(nombreCompleto, nombre, apellidoPaterno, apellidoMaterno);
	
	// Convertir la primera letra de cada palabra a may�scula
	capitalizarNombres(nombre, apellidoPaterno, apellidoMaterno);
	
	// Mostrar el resultado con el cambio en el orden de las palabras
	cout << "Nombre formateado: " << apellidoPaterno << " " << apellidoMaterno << " " << nombre << endl;
	return 0;
}
