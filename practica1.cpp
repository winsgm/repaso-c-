//titulo:valaores de tipos de datos 
//autor:winston garrido montaño 
//descripcion:
//fecha:11/1/2024

#include <iostream>
using namespace std;
int main() {
	short int numero_entero_p; // Tamaño de 16 bits con rango de -32768 a 32767
	unsigned short int numero_entero_p1; // 16 bits con rango limite de  65535, rango minimo de 0
	int numero_entero; // 32 bits, rango límite de 2147483647, rango mínimo -2147483648
	unsigned int num_entero_uno; // 32 bits rango límite de 4294967295, rango mínimo 0
	float numero_decimal; // 32 bit con un rango limite de 3.4E+38, rango minimo 1.7E-308
	double numero_decimal_g; //64 bit
	
	// Asignando valores límites de los tipos de dato
	numero_entero_p = -32767;
	cout << "Número entero enano: " << numero_entero_p << endl;
	numero_entero_p1 = 65535;
	cout << "Valor excedido: " << numero_entero_p1 << endl;
	
	// Asignar los valores máximos de unsigned int y int
	numero_entero = 2147483647;
	cout << "Valor entero máximo: " << numero_entero << endl;
	numero_entero = -2147483648; // Corregir el valor mínimo
	cout << "Valor mínimo: " << numero_entero << endl;
	numero_entero = 2147483647; // Punto y coma agregado
	cout << "Valor excedido de límites: " << numero_entero << endl;
	
	num_entero_uno = 4294967295;
	cout << "Valor máximo: " << num_entero_uno << endl;
	num_entero_uno = 0;
	cout << "Valor minimo: " << num_entero_uno << endl;
	// Corregir la asignación de un valor excedido de límites
	num_entero_uno = 4294967296; // Falta el punto y coma aquí
	cout << "Valor excedido de límites: " << num_entero_uno << endl;
	
	//asignacion de valores
	numero_entero_p1 = numero_entero_p;//no es correcta!. Los valores sn correctos?
	cout << "Numero entero pequeño 1ra asignacion: "<<numero_entero_p1<<endl;
	/*Rango del short int = -32768 al 32767 // unsigned short int = limite de 0 a 65535*/
	numero_entero_p=32767;
	numero_entero_p1 = numero_entero_p;//no es correcta!. Los valores son correctos?
	cout << "Numero entero pequeño 2da asignacion: "<<numero_entero_p1<<endl;
	numero_entero_p=32760;
	numero_entero_p1 = numero_entero_p;//Si es correcta. Los valores son correctos?
	cout << "Numero entero pequeño 2da asignacion: "<<numero_entero_p1<<endl;
	return 0;
}
