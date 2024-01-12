//titulo:valaores de tipos de datos 
//autor:winston garrido montaño 
//descripcion:
//fecha:11/1/2024

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	short int numero_entero_p;
	unsigned short int numero_entero_P1;
	int numero_entero;
	unsigned int numero_entero_s;
	float numero_decimal;
	double numero_decimal_g;
	//asignamos valores limites de los tipos de datos 
	numero_entero_p=32767;//valor limite del tipo de dato 
	cout <<"numero entero pequeño:"<<numero_entero_p<<endl;
	numero_entero_P1=65535;//
	cout <<"numero entero pequeño positivo:"<<numero_entero_P1<<endl;
	numero_entero=2147483647;
	cout <<"numero entero:"<<numero_entero<<endl;
	//numero_entero_s=4294967295
	//cout <<"numero entero positivo:"<<numero_entero_s<<endl;
	//asiganacion entre variables 
	//numero_entero_p1=numero_entero_P;
	//cout <<"numoero entero pequeño 1ra asigancion:"<<numero_entero_p1<<endl;
	
	return 0;
}
