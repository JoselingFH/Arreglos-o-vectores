/*3.Escribe un programa que lea de la entrada est�ndar un vector de numeros y muestre
en la salida est�ndar los n�meros del vector con sus �ndices asociados. */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numeros[1000],numero;
	
	cout<<"Ingrese el numero de elementos del Vector: "; cin>>numero;
	
	for(int i=0;i<numero;i++){
		cout<<"Ingrese un numero: "; cin>>numeros[i];
	}
	for(int i=0;i<numero;i++){
		cout<<i<<", corresponde a: "<<numeros[i]<<endl;
	}
	
	
	system("pause");
	return 0;
}

