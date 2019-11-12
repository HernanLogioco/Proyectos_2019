#include <iostream>
using namespace std;
// Titulo..: programa sobrecarga01.cpp
// Objetivo: demostración de sobrecarga de operadores
// Autor...: Oscar E. Palacios
#include <iostream>
using namespace std;

class Pareja {
private:
	//double a,b;
public:
	double a, b; // OTRA OPCION---- PARA USAR LOS ATRIBUTOS COMO PRIVADO DECLARAR A LAS SOBRECARGAS COMO FRIEND...
	friend Pareja& operator +(const Pareja &p1,const Pareja &p2);
	friend ostream& operator << (ostream &o,const Pareja &p);
	friend istream& operator >>(istream &o,Pareja &p);
	
	// constructor
	Pareja(const double a1=0,const double b1=0)
	{
		a = a1;
		b = b1;
	}
	double ver1(){return a;}
	double ver2(){return b;}
};

// Sobrecarga del operador +
Pareja & operator +(const Pareja &p1,const Pareja& p2)
{
	//return *(new Pareja(p1.a + p2.a, p1.b + p2.b) );
	Pareja aux(p1.a + p2.a, p1.b + p2.b);
	return aux;
}


// Sobrecarga del operador COUT<< para la clase Pareja
ostream& operator << (ostream &o,const Pareja &p)
{
	o<< p.a << "," << p.b;
	return o;
}

//Sobrecarga del operador >> ........(CIN>>)
istream& operator >>(istream &o,Pareja &p){
	o>>p.a>>p.b;
	//o.ignore();
	return o;
}

int main(int argc, char *argv[]) {
	Pareja A(50, 75 );
	Pareja B;
	cout<<"Ingresar los valores para B=(a , b): "<<endl;
	cin>>B;//Utilizo la sobrecarga de >> para leer los datos de B 
	Pareja C =  A + B;// Sobrecarga del operador + suma dos valores de tipo pareja...q devuelve otro valor d tipo pareja C
	

/*	cout << "A = " << A.ver1()<<" ," << A.ver2()<< "\n";
	cout << "B = " << B.ver1()<<','<< B.ver2()<< "\n";
	cout << "C = " << C.ver1()<< " , "<< C.ver2()<< "\n"; */

	// Sobrecarga del operador <<
	cout << "A = " << A <<endl;// es lo mismo.....endl;=== "\n"
	cout << "B = " << B << "\n";
	cout << "C = " << C << "\n";
	
	return 0;
}

