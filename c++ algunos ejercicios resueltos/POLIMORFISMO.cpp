#include <iostream>
using namespace std;
class animal{
private:
	int edad;
public:
	animal(int);
	virtual void comer()=0;     //POLIMORFISMO "COMER()"
};
animal::animal(int _edad){
	edad=_edad;
}
void animal::comer(){        //DEFINO LA FUNCION
	cout<<"YO COMO ";
}

class humano: public animal{
private:
	string nombre;
public:
	humano(int, string);
	void comer()override;
};
humano::humano(int _edad,string _nombre):animal(_edad){
	nombre=_nombre;
}
void humano::comer(){
	animal::comer();
	cout<<"EN UNA MESA SENTADO EN LA SILLA(humano)";
}

class perro:public animal{
private:
	string nombre,raza;
public:
	perro(int,string,string);
	void comer()override;
};
perro::perro(int _edad,string _nombre,string _raza):animal(_edad){
	nombre=_nombre;
	raza=_raza;
}
void perro::comer(){
	animal::comer();
	cout<<"EN EL SUELO CON SU PLATO(perro)";
}
int main(int argc, char *argv[]) {
	animal *animales[2];
	animales[0]=new perro(2,"bacco","PITBULL");
	animales[0]->comer();//POLIMORFISMO FUNCION COMER/() PARA UNA MISMA FUNCION CADA CLASE HACE ALGO DISTINTO
	cout<<endl;
	animales[1]=new humano(2,"Hernan");
	animales[1]->comer();
	
	return 0;
}

