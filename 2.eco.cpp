#include <iostream>
using namespace std;

void lineaSeparada(int n,char cadena[]){
	for(int i=0;i<n;i++){
		cout<<cadena[i]<<endl;
	}
}

int tamanioCadena(char cadena[]){
	int n=0;
	while(cadena[n]!='\0'){
		n++;
	}
	return n;
}
int main(){
	int n;
	char palabra[50];
	cout<<"Ingresa una palabra:"<<endl;
	cin>>palabra;
	n=tamanioCadena(palabra);
	lineaSeparada(n,palabra);
	return 0;	
	
}
