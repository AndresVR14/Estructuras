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

void help();

int main(int argc, char *argv[]){
	
	cout<<"\t\t\t\t\t\tRISK++"<<endl;
	char *comando = new char [20];
	//cout<<strupr(comando)<<endl;
	strcpy(comando, argv[1]);
	help();
	do{
		cout<<endl<<"$"<<endl;
		cout<<"Su comando fue: "<<comando<<endl;
		for(int i=0; i<argc; i++){
			cout<<argv[i]<<endl;
		}
	}while(strcmp(comando,"salir")!=0);

	return 0;
}

void help(){//Esta función será guardada a la librería "help.h"
	cout<<"\t\t\t\t\tHELP!"<<endl;
	cout<<"Para obtener mas informacion acerca de un comando especifico, escriba HELP seguido del nombre de comando"<<endl;
	cout<<"inicializar -> inicia el juego"<<endl;
	cout<<"turno <id_jugador> -> inicia el turno del jugador indicado"<<endl;
	cout<<"guardar <nombre_archivo> -> guarda el juego"<<endl;
	cout<<"guardar_comprimido <nombre_archivo> -> guarda el juego en un archivo binario"<<endl;
	cout<<"costo_conquista -> calcula el costo de invacion de territorios"<<endl;
	cout<<"conquita_mas_barata -> calcula la conquista mas barata"<<endl;
	cout<<"salir -> termina el programa"<<endl;
}