/*7. Realiza un programa que defina dos vectores de caracteres y después almacene el contenido
de ambos vectores en un nuevo vector, situando en primer lugar los elementos del primer vector
seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la
salida estándar. */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char vector1[9]={'a','l','m','a','c','e','n','a','r'}, vector2[9]={'c','o','n','t','e','n','i','d','o'};
	char vectorN[18];
	
	
	for(int i=0;i<9;i++){
		vectorN[i]= vector1[i];
	}
	
		for(int i=9;i<18;i++){
		vectorN[i]= vector2[i-9]; 
	}
	
	for(int i=0;i<18;i++){
		cout<<vectorN[i]<<endl;
	}
	
	system("pause");
	return 0;
}

