
//de: winston garrido monta�o 

#include <iostream>
#include<stdlib.h>//Libreria que proporciona la funcion para generar numeros aleatorios.
#include<time.h>//librer?a en C++ que proporciona funciones para trabajar con el tiempo y sirve para
//que los numeros generados no sean los mismo.

using namespace std;

int main(int argc, char *argv[]) 
{
	/*
	Se crean las variables de tipo entero, en la variable 
	numeros_generar se almacenara el rango de numeros a generar y la variable 
	generador guardara los numeros generados por la funcion rand().
	*/
	int numeros_generar, generador;
	
	cout<<"Generador de numeros aleatorios" "\n";
	cout<<"Cuantos numeros quiere generar:";
	cin>>numeros_generar;
	/*
	time(NULL) devuelve el n?mero de segundos transcurridos desde el 1 de enero de 1970 hasta la fecha y hora actuales.
	Y esta funcion se utiliza para inicializar el generador de n?meros aleatorios
	con una semilla diferente cada vez que se ejecuta el programa.
	*/
	srand(time(NULL));
	
	/*
	Se inicializa el bucle for para generar los numeros dependiendo del rango que quiera el usuario,
	la variable contador sirve para seguir el bucle hasta el numero dado por el usuario.
	*/
	for(int contador = 0; contador < numeros_generar; contador++)
	{
		/*
		se utiliza la funcion rand() pero antes se le suma 1 para que no genere 
		el numero 0 y se pone de limite el 100 para que solo llegue al 99.
		*/
		generador = 1 + rand()%(100-1); 
		
		
		
		if (contador + 1 == numeros_generar)//se hace uso del if para imprimir una , despues del numero y tambien para no imprimir al numero final una ,
		{
			cout<<generador <<endl;
		}
		else
		{
			cout<<generador <<", ";
		};
	};
	
	return 0;
}
