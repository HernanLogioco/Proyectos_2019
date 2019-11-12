#include <iostream>
#include <cmath>
using namespace std;
class cilindro {//Interface, declaración de atributos y métodos
private:
	double radio, altura, volumen;
public:
	void asignar_datos(double r1, double a1);
	void calcular_volumen();
	double ver_radio(){return radio;}; //Al escribir el código aquí,
	double ver_altura(){return altura;};//rompemos el encapsulamiento
	double ver_volumen(){return volumen;};
};
//Implementacion de metodos fuera de la clase con ::

void cilindro::asignar_datos(double r1, double a1){//GUARDAMOS DATOS CON EL CONSTRUCTOR
	radio=r1;
	altura=a1;
}
void cilindro::calcular_volumen(){//CALCULAMOS EL VOLUMEN
	volumen = 3.14*radio*radio*altura;//M_PI ES EL VALOR DE---> PI=3.14....
}


int main(int argc, char *argv[]) {
	cilindro C1;
	cilindro C2;
	C1.asignar_datos(2,5);
	C2.asignar_datos(1,4);
	C1.calcular_volumen();
	C2.calcular_volumen();
	cout<<"Datos de C1..."<<"RADIO:"<<C1.ver_radio()<<"ALTURA:"<<C1.ver_altura()<<"VOLUMEN:"<<C1.ver_volumen()<<endl;
	cout<<"Datos de C2..."<<"RADIO:"<<C2.ver_radio()<<"ALTURA:"<<C2.ver_altura()<<"VOLUMEN:"<<C2.ver_volumen()<<endl;
	return 0;
}

