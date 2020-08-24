#include <iostream>
#include <string.h>

/*
	Nombre: Andrés Vásquez - Heyling Burgos - Santiago Fernández
	Clase: Estructuras de Datos
	Profesor: Andrea del Pilar Rueda
	Periodo: 2020-3
	Título: Entrega 0 - Proyecto Final
*/
using namespace std;

int main(int argc, char *argv[]){
	
	cout<<"\t\t\t\t\t\tRISK++"<<endl;
	char *comando = new char [20];
	strcpy(comando, argv[1]);
	do{
		cout<<endl<<"$"<<endl;
		cout<<"Su comando fue: "<<comando<<endl;
		for(int i=0; i<argc; i++){
			cout<<argv[i]<<endl;
		}
	}while(strcmp(comando,"salir")!=0);

	return 0;
}
