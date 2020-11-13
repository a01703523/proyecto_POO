#include <iostream>
using namespace std;

class ComidaMexicana{
	private:
		string tortilla, salsa, sope, verdura;
		int porcionCM;
		float precioCM;
	public:
		ComidaMexicana(string,int,float);
		string combinarCM();
		int sumaPorcionesCM();
		float calcularPrecioCM();
		void set_verduraCM(string);
};


class ComidaEU{
	private:
		string tortilla, salsa;
		int porcionEU;
		float precioEU;
	public:
		ComidaEU(string,int,float);
		string combinarCM();
		int sumaPorcionesCM();
		float calcularPrecioCM();
		void set_verduraCM(string);
};


class ComidaAlemana{
	private:
		string tortilla, salsa;
		int porcionAL;
		float precioAL;
	public:
		ComidaAlemana(string,int,float);
		string combinarCM();
		int sumaPorcionesCM();
		float calcularPrecioCM();
		void set_verduraCM(string);
};


int main(){
	
	return 0;
}