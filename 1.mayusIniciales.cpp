#include <iostream>
#include <locale.h> //Llamado a la librería que permitirá hacer uso de acentos
using namespace std;

char* mayusIniciales(char cadena[]){
	int n=0;
	bool verificador;
	while(cadena[n]!='\0'){ //Permite leer cuan grande es una cadena
		n++;
	}
	for(int i=0;i<n;i++){
		if(verificador==true||i==0){
			cadena[i]=toupper(cadena[i]);
		}
		if(cadena[i]==' '){ //Verifica si el carácter es un espacio en blanco
			verificador=true;
		}else{
			verificador=false;
		}
	}
	return cadena;
}

int main(){
	setlocale(LC_ALL, "spanish"); //Definición de la función setlocale
	char minus[50]="cáceres patrimonio de la humanidad";
	cout<<mayusIniciales(minus)<<endl;
	return 0;	
}
