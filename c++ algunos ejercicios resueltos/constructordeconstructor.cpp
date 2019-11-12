#include <iostream>
using namespace std;
class Rueda {
	float m_tamanio;
public:
	Rueda(float tamanio){
		m_tamanio=tamanio;
	};
};



class Bicicleta{
	Rueda r_delantera, r_trasera;
public:
	Bicicleta(float rodado1):r_delantera(rodado1),r_trasera(rodado1){
		
	}
	
};
int main(int argc, char *argv[]) {
	Bicicleta Venzo(27.5);

	
	
	return 0;
}

