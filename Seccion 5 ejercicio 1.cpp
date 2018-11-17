//1. Escribe un programa que defina un vector de números y calcule la suma de sus elementos.

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero[6]={2,5,1,5,9,2};
	int suma=0;
	
	for(int i=0;i<6;i++){
		suma= suma + numero[i];
	}
	
	cout<<"La suma de los elementos es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
