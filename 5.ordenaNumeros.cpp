#include <iostream>
using namespace std;

int contadorRepeticion(int n,int num,int arreglo[]){
	int cont=0;
	for(int i=0;i<n;i++){
		if(num==arreglo[i]){
			cont++;
		}
	}
	return cont;
}

int main(){
	int n,menor,mayor=0;
	cout<<"Ingresa la cantidad de numeros a analizar:"<<endl;
	cin>>n;
	int lista[50];
	for(int i=0;i<n;i++){
		cout<<"Ingresa Numero["<<i+1<<"]: ";
		cin>>lista[i];
		if(i==0){
			menor=lista[i];
		}
		if(lista[i]>mayor){
			mayor=lista[i];
		}
		if(lista[i]<menor){
			menor=lista[i];		
		}
	}
	if(contadorRepeticion(n,menor,lista)==1){
		cout<<"El numero menor es: "<<menor<<" y se repite 1 vez"<<endl;
	}else{
		cout<<"El numero menor es: "<<menor<<" y se repite: "<<contadorRepeticion(n,menor,lista)<<" veces"<<endl;
	}
	if(contadorRepeticion(n,mayor,lista)==1){
		cout<<"El numero mayor es: "<<mayor<<" y se repite 1 vez"<<endl;
	}else{
		cout<<"El numero mayor es: "<<mayor<<" y se repite: "<<contadorRepeticion(n,mayor,lista)<<" veces"<<endl;
	}
	return 0;
}
