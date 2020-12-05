#ifndef MAQUINA_H
#define MAQUINA_H

#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>

#include "premio.h"

using namespace std;

//clase padre
class Maquina{
	private:
		int oportunidades;
		int precio;
		int pelu;
		int pelo;
		int dul;
		Peluche peluches[3];
		Pelota pelotas[3];
		Dulce dulces[3];
		int regalo; //nuevooo
	public:
		Maquina();
		Maquina(int,int,int,int,int,Peluche,Pelota,Dulce);
 		void set_cuantosPelu(int pelu);
		void set_cuantasPelo(int pelo);
		void set_cuantosDul(int dul);
		void set_oportunidad(int opor);

		int get_cuantosPelu();
		int get_cuantasPelo();
		int get_cuantosDul();
		int get_oportunidad();
		Peluche get_Peluche(int index);
		Pelota get_Pelota(int index);
		Dulce get_Dulce(int index);


		void agregaPeluche(Peluche pelu);
		void agregaPelota(Pelota pelo);		
		void agregaDulce(Dulce dul);
		
		void jugar(int precio);
		void premioRandom();
		
		
};

//cons default
Maquina::Maquina(){
	oportunidades=0;
	precio=0;
	pelu=0;
	pelo=0;
	dul=0;
}

void Maquina::set_cuantosPelu(int pelu){
	pelu = 3;
}		
void Maquina::set_cuantasPelo(int pelo){
	pelo = 3;
}		
void Maquina::set_cuantosDul(int dul){
	dul = 3;
}
void Maquina::set_oportunidad(int opor){
	oportunidades = opor;
}




int Maquina::get_cuantosPelu(){
	return pelu;
}
int Maquina::get_cuantasPelo(){
	return pelo;
}
int Maquina::get_cuantosDul(){
	return dul;
}
int Maquina::get_oportunidad(){
	return oportunidades;
}

Peluche Maquina::get_Peluche(int index){
	return peluches[index];
}
Pelota Maquina::get_Pelota(int index){
	return pelotas[index];
}
Dulce Maquina::get_Dulce(int index){
	return dulces[index];
}




void Maquina::agregaPeluche(Peluche objpelu){
	if(pelu < 3){
		peluches[pelu]= objpelu;
		pelu++;
	}
}
void Maquina::agregaPelota(Pelota objpelo){
	if(pelo < 3){
		pelotas[pelo]= objpelo;
		pelo++;
	}
}
void Maquina::agregaDulce(Dulce objdul){
	if(dul < 3){
		dulces[dul]= objdul;
		dul++;
	}
}


void Maquina::jugar(int precio){
	oportunidades = precio/10;
	set_oportunidad(oportunidades);
	cout<<"Ha ingresado $"<<precio<<endl;
	cout<<"Tiene "<<get_oportunidad()<<" oportunidades"<<endl;
}
//nonooo
void Maquina::premioRandom(){
	cout<<"Que tipo de premio quiere intentar ganar?"<<endl;
	cout<<"Peluche(1), Pelota(2) o Dulce(3)?"<<endl;
	int seleccion;
	cin>>seleccion;
	cout<<"Ingrese numero de la suerte (1-10)"<<endl;
	int numSuerte;
	cin>>numSuerte;
	srand(time(0));
	if(seleccion != 1 && seleccion != 2 && seleccion != 3)
		return;
	
	for (int i=1; i<=oportunidades; i++){
		int r = rand() % 11;
		int regalo = (rand()%3);
		if(r == numSuerte){
			cout<<"Felicidades!! ganaste un premio en el intento "<<i<<"\n";
			if(seleccion == 1){
				cout<<"Has ganado un peluche de: ";
				cout<<peluches[regalo].get_animal()<<" "<<peluches[regalo].get_color()<<" "<<peluches[regalo].get_tamanio()<<endl;
				
			}else if(seleccion == 2){
				cout<<"Has ganado una pelota de: ";
				cout<<pelotas[regalo].get_tipo()<<" "<<pelotas[regalo].get_color()<<" "<<pelotas[regalo].get_tamanio()<<endl;
				
			}else if(seleccion == 3){
				cout<<"Has ganado un dulce de: ";
				cout<<dulces[regalo].get_marca()<<" "<<dulces[regalo].get_color()<<" "<<dulces[regalo].get_tamanio()<<dulces[regalo].get_cantidad()<<endl;
				
			}
		}else cout<<"En el intento "<<i<<" no obtuviste nada\n";
		
	}
}


	



#endif