/*4. Escriba un programa que defina un vector de numeros y muestre en la salida
estándar el vector en orden inverso- del último al primer elemento */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero[4]={5,7,9,4};
	
	for(int i=3;i>=0;i--){
		cout<<numero[i]<<endl;
	}
	
	system("pause");
	return 0;
}
