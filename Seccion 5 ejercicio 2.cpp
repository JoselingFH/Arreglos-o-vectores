/*2.Escriba un programa que defina un vector de números y calcule 
la multiplicación acumulada de sus elementos. */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero[3]={2,2,4};
	int multiplicacion= 1;
	
	for(int i=0;i<3;i++){
		multiplicacion = multiplicacion * numero[i];
	}
	
	cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
	
	system("pause");
	return 0;
}
