#include <iostream>
#include <locale.h> //Llamado a la librer�a que permitir� hacer uso de acentos
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
		if(cadena[i]==' '){ //Verifica si el car�cter es un espacio en blanco
			verificador=true;
		}else{
			verificador=false;
		}
	}
	return cadena;
}

int main(){
	setlocale(LC_ALL, "spanish"); //Definici�n de la funci�n setlocale
	char minus[50]="c�ceres patrimonio de la humanidad";
	cout<<mayusIniciales(minus)<<endl;
	return 0;	
}
