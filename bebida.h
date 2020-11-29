#include <iostream>
using namespace std;



//composicion
class Bebida{
	private:
		string agua, cerveza, refresco, jugo, cafe;
		
	public:
		Bebida(string,string,string,string,string);
		
		void get_bebida();
};

Bebida::Bebida(string ag, string cerv, string ref, string ju, string caf){
	agua = ag;
	cerveza = cerv;
	refresco = ref;
	jugo = ju;
	cafe = caf;
}

void Bebida::get_bebida(){}
