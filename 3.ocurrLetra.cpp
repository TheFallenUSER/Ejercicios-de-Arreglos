#include <iostream>
using namespace std;

int tamanioCadena(char cadena[]){
	int n=0;
	while(cadena[n]!='\0'){
		n++;
	}
	return n;
}

int main(){
	int n,cont=0;
	char letra,palabra[50];
	cout<<"Introduzca una palabra: ";
	cin>>palabra;
	cout<<"Introduzca una letra: ";
	cin>>letra;
	n=tamanioCadena(palabra);
	for(int i=0;i<n;i++){
		if(palabra[i]==letra){
			cont++;
		}
	}
	cout<<"La cantidad de ocurrencias de la letra "<<letra<<" en la palabra "<<palabra<<" es de: "<<cont<<endl;
	return 0;
}
