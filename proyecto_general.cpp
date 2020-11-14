#include <iostream>
using namespace std;

//clase1
class ComidaMexicana{
	private:
		string pozole, salsa, sope, verdura;
		int porcionCM;
		float precioCM;
	public:
		ComidaMexicana(string,string,string,string,int,float);
		string combinarCM();
		int sumaPorcionesCM();
		float calcularPrecioCM();
		void set_verduraCM(string);
};

//constructor
ComidaMexicana::ComidaMexicana(string poz, string sals, string _sope, string verd, int porCM, float preCM){
	pozole = poz;
	salsa = sals;
	sope = _sope;
	verdura = verd;
	porcionCM = porCM;
	precioCM = preCM;
}

//metodos
void ComidaMexicana::set_verduraCM(verdura){
	string verd;
	verd = cin>>"Ingrese su verdura: "<<endl;
    cout<<"La verdura es: "<<verd<<endl;
}



//clase2
class ComidaEU{
	private:
		string pan, carne, papas, catsup;
		int porcionEU;
		float precioEU;
	public:
		ComidaEU(string,string,string,string,int,float);
		string combinarEU();
		int sumaPorcionesEU();
		float calcularPrecioEU();
		void set_carneEU(string);
};

//constructor
ComidaEU::ComidaEU(string _pan, string carn, string _papas, string catsu, int porEU, float preEU){
	pan = _pan;
	carne = carn;
	papas = _papas;
	catsup = catsu;
	porcionEU = porEU;
}

//metodos
void ComidaEU::set_carneEU(carne){
	string carn;
	carn = cin>>"Ingrese su carne: "<<endl;
	cout<<"La carne es: "<<carn<<endl;
}

//clase3
class ComidaAlemana{
	private:
		string panBrot, curry, strudel, salchicha;
		int porcionAL;
		float precioAL;
	public:
		ComidaAlemana(string,string,string,string,int,float);
		string combinarAL();
		int sumaPorcionesAL();
		float calcularPrecioAL();
		void set_strudelAL(string);
};

//constructor
ComidaAlemana::ComidaAlemana(string pBrot, string _curry, string strudl, string salch, int porAL, float preAL){
	pBrot = pBrot;
	curry = _curry;
	strudel = strudl;
	salchicha = salch;
	porcionAL = porAL;
	precioAL = preAL;
}

//metodos
void ComidaAlemana::set_strudelAL(strudel){
	string strudl;
	strudl = cin>>"Ingrese su strudel (queso o manzana): "<<endl;
	cout<<"El strudel es de: "<<strudl<<endl;
}

int main(){
	//creando objetos
	ComidaMexicana desayunoMex(
	ComidaEU lunchEU
	ComidaAlemana cenaAl
	
	return 0;
}