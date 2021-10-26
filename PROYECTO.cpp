#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;


class Proyecto{
	public:
		void registrar();
		void eliminar();
		void consultar();	
		void menu();
		void caratula();
		//Colores para pintar letras de consola
		string negro = "\u001B[30m";
	    string rojo = "\u001B[31m";
	    string verde = "\u001B[32m";
	    string amarillo = "\u001B[33m";
	    string azul = "\u001B[34m";
	    string purpura = "\u001B[35m";
	    string cielo = "\u001B[36m";
	    string blanco = "\u001B[37m";
	    string salto = "\n";
};


struct Pasiente{
	char nombre [50];
	char dpi[13];
	int cama;
	int edad;
}  cliente;


void Proyecto::registrar(){
	

	system("cls");
	cout<<verde<<"--- Registro de un nuevo pasiente ----\n"<<blanco;
	cout<<"Ingrese el nombre completo del paciente: "<<amarillo;
	cin>>cliente.nombre;
	
	cout<<"Ingrese el documento de identificación del pasiente: "<<amarillo;
	cin>>cliente.dpi;
	cout<<"Ingres";
}

void Proyecto::menu(){
	system("cls");
	cout<<amarillo<<"------- MENU PRINCIPAL --------"<<salto;
	cout<<"1 - Registrar Pasiente"<<salto;
	cout<<"2 - Consulta de pasiente"<<salto	
	cout<<"3 - Eliminacion de pasiente"<<salto;
}



void Proyecto::caratula(){
	 system("cls");
	 
	
	cout<<verde<<"*********************************************"<<salto;
	cout<<verde<<"**"<<amarillo<<" UNIVERSIDAD MARIANO GALVEZ DE GUATEMALA "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"         ING SAUL DONAZETTI ARBIZU       "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"               ALGORITMOS                "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"                                         "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"                                         "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"              Proyecto Final             "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"                                         "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"                                         "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"ABNER NOE RAMIREZ ALVAREZ                "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"CARNE: 9490-21-3265                      "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"OSCAR ORLANDO LIMA                       "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"CARNE: 9490-21-75                        "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"GERARDO OVANDO                           "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"GRUPO  \"6\"                               "<<verde<<"**"<<salto;
	cout<<verde<<"**"<<amarillo<<"30/10/21                                 "<<verde<<"**"<<salto;
	cout<<verde<<"*********************************************"<<salto;
	cout<<salto<<salto;
	cout<<blanco<<"-------[Precione cualquier tecla para continuar]-------";
	getchar();
}

int main(){
    Proyecto p = Proyecto();
    p.caratula();
    p.menu();
}
