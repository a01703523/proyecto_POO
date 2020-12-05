#ifndef PREMIO_H
#define PREMIO_H

#include <iostream>
#include <string>

using namespace std;


//clase padre
class Premio{
	private:
		string color;
		string tamanio;
		
	public:
		Premio(string,string);
		string get_color();
		string get_tamanio();	
};
//constructor
Premio::Premio(string col, string tam){
	color = col;
	tamanio = tam;
}

string Premio::get_color(){
	return color;
}
string Premio::get_tamanio(){
	return tamanio;
}

//hija 1
class Peluche: public Premio{
	private:
		string animal;
		
	public:
		Peluche(): Premio("",""),animal(""){}
		Peluche(string,string,string);
		
		string get_animal();		
};
//constructor h1

Peluche::Peluche(string col, string tam, string anim): Premio(col,tam){
	animal = anim;
}
 
string Peluche::get_animal(){
	return animal;
}



//hija 2
class Pelota: public Premio{
	private:
		string tipo;
		
	public:
		Pelota(): Premio("",""),tipo(""){}
		Pelota(string,string,string);
		
		string get_tipo();	
		
};

//constructor h2
Pelota::Pelota(string col, string tam, string tip): Premio(col,tam){
	tipo = tip;
}

string Pelota::get_tipo(){
	return tipo;
}


//hija 3
class Dulce: public Premio{
	private:
		string marca;
		float cantidad;
		
	public:
		Dulce(): Premio("",""),marca(""),cantidad(0.0){}
		Dulce(string,string,string,float);
		
		string get_marca();
		float get_cantidad();
};

//constructor h3
Dulce::Dulce(string col, string tam, string mar, float cant): Premio(col,tam){
	marca = mar;
	cantidad = cant;
}

string Dulce::get_marca(){
	return marca;
}
float Dulce::get_cantidad(){
	return cantidad;
}


#endif