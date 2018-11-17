/* 5.Desarolle un programa que lea de la entrada estándar un vector de enteros y
determine el mayor elemento del vector */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numeros[1000],numero,mayor=0;
	
	cout<<"Ingrese el numero de elementos del Vector: "; cin>>numero;
	
	for(int i=0;i<numero;i++){
		cout<<i<<"- Ingrese un numero: "; 
		cin>>numeros[i];
		
		if(numeros[i]>mayor){
			mayor= numeros[i];
		}
	}
	
	cout<<"\nEl mayor elemento del Vector es: "<<mayor<<endl;
	
	system("pause");
	return 0;
}
