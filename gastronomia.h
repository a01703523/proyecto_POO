#ifndef GASTRONOMIA_H
#define GASTRONOMIA_H

#include <iostream>
using namespace std;


class Gastronomia{
	private:
		int porcion;
		float precioPorcion;
			
	public:
		Gastronomia(int,float); //costructor

		
		int set_porcion();
		float calcularPrecio(porcion,bebida);
};

//constructor
Gastronomia::Gastronomia(int por, float pP){
  porcion = por;
  precioPorcion = pP;
}

//setter
int Gastronomia::set_porcion(){
	cout<<"Ingrese numero de porciones"<<endl;
	cin>>porcion<<endl;
	return porcion;
}

//metodo 2
float Gastronomia::calcularPrecio(porcion,bebida){
	//aqui va comosicion
}


class Mexicana : public Gastronomia{
	private:
		bool pica;
		string verdura, taco, mollete;
				
	public:
		//constructor
		Mexicana(int,float,bool,string,string,string);
	
		bool calcularPicor(pica);
		string set_verdura();
		void pedirTaco();
		void pedirMollete();
};


//constructor clase mex
Mexicana::Mexicana(int por, float pP, bool pic, string verd, string tac, string moll){
  porcion = por;
  precioPorcion = pP;
  pica = pic;
  verdura = verd;
  taco = tac;
  mollete = moll;
}


//metodo mex 1
bool Mexicana::calcularPicor(pica){
}

//metodo mex 2
string Mexicana::set_verdura(){
	cout<<"Ingrese verdura favorita"<<endl;
	cin>>verdura<<endl;
	return verdura;
}

//metodo mex 3
void Mexicana::pedirTaco(){
	cout<<"Pedir tacos"<<endl;
}

//metodo mex 4
void Mexicana::pedirMollete(){
	cout<<"Pedir molletes"<<endl;
}


class Estadounidense : public Gastronomia{
	private:
		string hamburguesa, hotdog, papasFritas;
		int calorias;
	
	public:
		//constructor
		Estadounidense(int,float,string,string,string,int);
		
		void elegirComida();
		int contarCalorias(calorias,porcion);
};

//constructor eu
Estadounidense::Estadounidense(int por, float pP, string hamb, string hd, string papasF, int cal){
  porcion = por;
  precioPorcion = pP;
  hamburguesa = hamb;
  hotdog = hd;
  papasFritas = papasF;
  calorias = cal;
}


//metodo 1 eu
void Estadounidense::elegirComida(){}

//metodo 2 eu
int Estadounidense::contarCalorias(calorias,porcion){
	calorias = calorias*porcion;
	return calorias;
}



class Alemana : public Gastronomia{
	private:
		string salchicha, pan, curry;
	
	public:
		Alemana(int,float,string,string,string);
		
		bool agregarCurry();
		void set_tiposalchicha();
};


//constructor al
Alemana::Alemana(int por, float pP, string salch, string pn, string curr){
  porcion = por;
  precioPorcion = pP;
  salchicha = salch;
  pan = pn;
  curry = curr;
}


//metodo 1 al
bool Alemana::agregarCurry(){
	cout<<"Quiere Curry? (si/no)"<<endl;
	cin>>curry<endl;
	if (curry == si){
		return true;
	}
	else{
		return false;
	}
}


//metodo 2 al
void Alemana::set_tiposalchicha(){
	cout<<"Ingrese salchicha favorita"<<endl;
	cin>>salchicha<<endl;
}



#endif