/* 8. Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo
multiplicados por 2 y muestre el segundo arreglo */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int arreglo1[5];
	int arreglo2[5];
		
	for(int i=0;i<5;i++){ 
		cout<<i<<" )Ingrese los elementos del primer arreglo: "; cin>>arreglo1[i];
	}
	for(int i=0;i<5;i++){
		arreglo2[i] = arreglo1[i]*2;
	}
	
	cout<<"\nLos elementos del segundo arreglo son: ";
	for(int i=0;i<5;i++){
		cout<<arreglo2[i]<<"  "<<endl;
	}
	
	system("pause");
	return 0;
}
