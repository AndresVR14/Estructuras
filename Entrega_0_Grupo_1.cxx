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
bool verificarComando(char*);

int main(int argc, char *argv[]){
	
	cout<<"\t\t\t\t\t\tRISK++"<<endl;
	char *comando = new char [40];
	help();
	do{
		cout<<"$";
		cin.getline(comando, 40);
		cout<<endl<<"Su comando fue: "<<comando<<endl;
		if(strcmp(comando,"inicializar")==0){
		}else if(strcmp(comando,"salir")==0){
			break;
		}else if(strcmp(comando,"costo_conquista")==0){
		}else if(strcmp(comando,"conquita_mas_barata")==0){
		}else{
			char *coman2 = new char [40];
			strcpy(coman2, comando);
			coman2 = strtok(coman2, " ");
			char *c = strtok(comando, "<");
			c=strtok(NULL, "<");
			char *condicion=strtok(c, ">");
			cout<<coman2<<endl;
			cout<<condicion<<endl;
			if(strcmp(coman2,"turno"){
			}else if(strcmp(coman2,"guardar"){
			}else if(strcmp(coman2,"guardar_comprimido"){
			}
		}
	}while(strcmp(comando,"salir")!=0);

	return 0;
}

void help(){//Esta función será guardada a la librería "help.h"
	cout<<"\t\t\t\t\t\tHELP!"<<endl;
	cout<<"Para obtener mas informacion acerca de un comando especifico, escriba HELP seguido del nombre de comando"<<endl;
	cout<<"inicializar -> inicia el juego"<<endl;
	cout<<"turno <id_jugador> -> inicia el turno del jugador indicado"<<endl;
	cout<<"guardar <nombre_archivo> -> guarda el juego"<<endl;
	cout<<"guardar_comprimido <nombre_archivo> -> guarda el juego en un archivo binario"<<endl;
	cout<<"costo_conquista -> calcula el costo de invacion de territorios"<<endl;
	cout<<"conquita_mas_barata -> calcula la conquista mas barata"<<endl;
	cout<<"salir -> termina el programa"<<endl;
}