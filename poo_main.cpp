#include <iostream>
#include <string>

#include "maquina.h"
#include "premio.h"

using namespace std;

int main(){
	
	Maquina maquina;

	
	Peluche peluche1("cafe","mediano","oso");
	maquina.agregaPeluche(peluche1);
	
	Peluche peluche2("gris","mediano","delfin");
	maquina.agregaPeluche(peluche2);
	
	Peluche peluche3("verde","chico","cocodrilo");
	maquina.agregaPeluche(peluche3);
	
	
	
	Pelota pelota1("blanca","grande","voley");
	maquina.agregaPelota(pelota1);
	
	Pelota pelota2("naranja","grande","basket");
	maquina.agregaPelota(pelota2);
	
	Pelota pelota3("roja","grande","futbol");
	maquina.agregaPelota(pelota3);	
	
	
	
	Dulce dulce1("blanco","chico","Hershey",25.9);
	maquina.agregaDulce(dulce1);
	
	Dulce dulce2("cafe","mediano","Carlos V",40.2);
	maquina.agregaDulce(dulce2);

	Dulce dulce3("verde","chico","Pelon",15.5);
	maquina.agregaDulce(dulce3);
	
	
	
	cout<<"Bienvenido usurario :)"<<endl;
	cout<<"Para empezar a jugar inserte $10 pesos o mas(+ intentos)"<<endl;
	int precio;
	cin>>precio;
	
	maquina.jugar(precio);
	maquina.premioRandom();
	
	
	
	
	
	
	
	return 0;
}