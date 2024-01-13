#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//definicion y asignacion de valores char
	char letra;
	char vocal_may, vocal_min;
	letra='L';
	cout<<"imprimiendo la letra L:"<<letra<<endl;
	//letra="bb";//error por asignacior mas de un caracter
	//asignando valores numericos
	letra=65; //ASCII lera A
	cout<<"imprimir ASCII 65:"<<letra<<endl;
	//imprimir en codigo ASCII las vocales may y min con acentos
	vocal_min=160;//letra a
	cout<<"imprimir ASCII 160:"<<vocal_min<<endl;
	vocal_may=69;//letra E
	cout<<"imprimir ASCII 69:"<<vocal_may<<endl;
	vocal_min=130;//letra e
	cout<<"imprimir ASCII 130:"<<vocal_min<<endl;
	vocal_may=73;//letra I
	cout<<"imprimir ASCII 73:"<<vocal_may<<endl;
	vocal_min=161;//letra i
	cout<<"imprimir ASCII 161:"<<vocal_min<<endl;
	vocal_may=79;//letra O
	cout<<"imprimir ASCII 79:"<<vocal_may<<endl;
	vocal_min=162;//letra o
	cout<<"imprimir ASCII 162:"<<vocal_min<<endl;
	vocal_may=85;//letra U
	cout<<"imprimir ASCII 85:"<<vocal_may<<endl;
	vocal_min=163;//letra u
	cout<<"imprimir ASCII 163:"<<vocal_min<<endl;
	vocal_may=64;//letra @
	cout<<"imprimir ASCII 64:"<<vocal_may<<endl;
	vocal_may=92;//signo barra invertida 
	cout<<"imprimir ASCII 92:"<<vocal_may<<endl;
	return 0;
}

