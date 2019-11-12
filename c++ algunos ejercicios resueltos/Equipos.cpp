#include <iostream>
using namespace std;

class Equipo {
private:
	string nom;
	int id;
	string deporte;
	int canJugadores;

	
	public:
		void verDeporte(){
			cout<<deporte<<endl;
		}
		Equipo(){
			
		}
	Equipo(int d,string dep,string nombre, int cantJugadores=0){
		nom=nombre;
		deporte=dep;
		id=d;
		canJugadores=cantJugadores;		
	
	}
	
protected:
	void ver(){
		cout<<"Protected"<<endl;
	}
};
class EquipoFutbol : public Equipo { 
	private:
	string entrenadordarquero;
public:
	EquipoFutbol(string nombre1):Equipo(8,"futbol",nombre1,11){  //Constructor
	ver();
	}
};

class EquipoBasquet : public Equipo {
private:
	string entrenadorsalto;
public:
	EquipoBasquet(string nombre,int id2):Equipo(id2,"Basquet",nombre,5){ //constructor 
		
	}

	
	void verentrenadordesalto(){
		
		cout<<entrenadorsalto<<endl;
	}
	void setentrenadordesalto(string entrenadorsalto1){
		entrenadorsalto=entrenadorsalto1;
	}
};
class EquipoVoley : public Equipo {};

int main() {
	EquipoFutbol boca("C. A. Boca Juniors");
	EquipoBasquet spurs("San Antonio Spurs",9);
	//EquipoVoley bolivar("Personal Bolívar");
	
	Equipo sky(9,"ciclismo","Team Sky");

	
	sky.verDeporte();
	boca.verDeporte();
	spurs.verDeporte();
	spurs.setentrenadordesalto("Juan");
	spurs.verentrenadordesalto();
	
	//cout<<spurs.deporte<<endl; //NO SE PUEDE ACCEDER A LA PARTE PRIVADA DESDE HERENCIA
	return 0;
}

