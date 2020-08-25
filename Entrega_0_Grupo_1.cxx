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
	char *p = new char [40];
	do{
		char *coman2 = new char [40];
		char *condicion = new char [40];
		char *ayuda = new char [40];
		do{
			char *c = new char [40];
			cout<<endl<<"$";
			cin.getline(comando, 40);
			strcpy(coman2, comando);
			strcpy(p, comando);
			coman2 = strtok(coman2, " ");
			if(strcmp(comando, "help")==0){
				ayuda = NULL;
				break;
			}else if(strcmp(coman2, "help")==0){
				c = strtok(p, " ");
				c = strtok(NULL, " ");
				strcpy(ayuda, c);
				if(!verificarComando(ayuda)){
					break;
				}
			}
			c = strtok(p, "<");
			c = strtok(NULL, "<");
			condicion=strtok(c, ">");
			cout<<endl<<"Su comando fue: "<<comando<<endl;
			delete c;
		}while(!verificarComando(comando) && !verificarComando(coman2));
		if(strcmp(coman2, "help")==0){
			if(ayuda==NULL){
				help();
			}else{
				
			}
		}else if(strcmp(comando,"inicializar")==0){
		}else if(strcmp(comando,"costo_conquista")==0){
		}else if(strcmp(comando,"conquita_mas_barata")==0){
		}else if(strcmp(coman2,"turno")==0){
		}else if(strcmp(coman2,"guardar")==0){
		}else if(strcmp(coman2,"guardar_comprimido")==0){
		}
		delete coman2;
		delete condicion;
		delete ayuda;
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

bool verificarComando(char *comando){
	if(strcmp(comando,"salir")==0){
		return true;
	}else if(strcmp(comando,"inicializar")==0){
		return true;
	}else if(strcmp(comando,"turno")==0){
		return true;
	}else if(strcmp(comando,"guardar")==0){
		return true;
	}else if(strcmp(comando,"guardar_comprimido")==0){
		return true;
	}else if(strcmp(comando,"costo_conquista")==0){
		return true;
	}else if(strcmp(comando,"conquista_mas_barata")==0){
		return true;
	}else if(strcmp(comando,"help")==0){
		return true;
	}
	return false;
}
