#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//declaracon y uso de bool
	bool b0;
	b0=true;
	cout<<"variable con valor verdadero"<<b0<<endl;
	b0=false;
	cout<<"variable con valor falso:"<<b0<<endl;
	//asignacion de valores numericos 
	//si es cero es falso, si es diferente de cero es verdadero 
	b0=0;//el valor se vera como false
	cout<<"variable con valor 0:"<<b0<<endl;
	b0=1;//el valor se vera como true
	cout<<"variable con valor 1:"<<b0<<endl;
	b0=100;//el valor se vera como true 
	cout<<"variable con valor -100:"<<b0<<endl;
	return 0;
}
