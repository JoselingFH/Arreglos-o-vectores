/*6. Escribe un programa que defina un vector de n�meros y calcule si existe alg�n
n�mero en el vector cuyo valor equivale a la suma del resto de n�meros del vector */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero[4]={3,4,8,1}, suma=0, mayor=0;
	
	for(int i=0;i<4;i++){
		suma= suma + numero[i];

	if(numero[i] > mayor){
			mayor = numero[i];
		}
	}
	if(mayor == suma-mayor){
		cout<<"El numero "<<mayor<<" equivale a la suma del resto del vector";
	}
	else{
		cout<<"Ningun numero equivale a la suma del resto del vector";
	}
	cout<<"\n";
	system("pause");
	return 0;
}
