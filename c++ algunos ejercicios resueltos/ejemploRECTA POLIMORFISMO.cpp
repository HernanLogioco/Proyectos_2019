#include <iostream>
using namespace std;
class TPunto {
private:
	float x,y;
public:
	void asignar_valor(float xx, float yy);
	float ver_x() {return x;}
	float ver_y() {return y;}
};


class TRecta {//Clase Base Abstracta{
protected:
	TPunto P1, P2;//Por agregacion
public:
	void asignar_coordenadas(float, float, float, float);
	virtual void obtener_ecuacion()=0;//Metodo virtual puro
	virtual void mostrar()=0;//Metodo virtual puro
	virtual ~TRecta(){};//destructor virtual
};
//TGeneral herencia simple de TRecta
class TGeneral: public TRecta{
private:
	float A,B,C;
public:
	void obtener_ecuacion();
	void mostrar();
	float ver_A() {return A;};
	float ver_B() {return B;};
	float ver_C() {return C;};
};
//TExplicita herencia simple de TRecta
class TExplicita: public TRecta{
private:
	float m, b;
public:
	void obtener_ecuacion();
	void mostrar();
	float ver_m() {return m;}
	float ver_b() {return b;}
};
//*** Implementacion de los métodos de las clases ***
void TPunto::asignar_valor(float xx, float yy)
{ x= xx; y= yy;
}


void TRecta::asignar_coordenadas(float x1, float y1, float x2, float y2)
{P1.asignar_valor(x1,y1);
P2.asignar_valor(x2,y2);
}


void TExplicita::obtener_ecuacion()
{ m = (P2.ver_y()-P1.ver_y())/(P2.ver_x()-P1.ver_x());
b = P1.ver_y() - (m * P1.ver_x());
}
void TGeneral::obtener_ecuacion()
{/* A= -(y2-y1)
	B= (x2-x1)
	C= -(y1*(x2-x1) - x1*(y2-y1))*/
	A = -(P2.ver_y()-P1.ver_y());
	B = (P2.ver_x()-P1.ver_x());
	C = -((P1.ver_y()* (P2.ver_x()-P1.ver_x())) - P1.ver_x()*(P2.ver_y()-P1.ver_y()));
}
void TExplicita::mostrar()
{cout << " Y = "<<ver_m()<<" . X + "<<ver_b()<<endl;
}
void TGeneral::mostrar()
{ cout <<endl<< ver_A()<<"x + "<<ver_B()<<"y + "<<ver_C()<<" = 0"<<endl;
}


	int main(int argc, char *argv[]) {
	float x1, x2, y1, y2;
	/*TExplicita R1;
	TGeneral R2;
	TRecta *PR;*/
	cout << "DATOS DE LOS PUNTOS P1 Y P2."<<endl<< endl;
	cout << "Ingrese X1: "; cin>> x1;
	cout << "Ingrese Y1: "; cin>> y1;
	cout << endl;
	cout << "Ingrese X2: "; cin>> x2;
	
		cout << "Ingrese Y2: "; cin>> y2;
		cout << endl;
		/*R1.asignar_coordenadas(x1,y1,x2,y2);
		R1.obtener_ecuacion();
		R2.asignar_coordenadas(x1,y1,x2,y2);
		R2.obtener_ecuacion();
		PR= &R1;
		PR->mostrar();
		PR= &R2;
		PR->mostrar();*/
		
		
		TRecta *PR=new TExplicita;
		PR->asignar_coordenadas(x1,y1,x2,y2);//funcion de la clase madre
		PR->obtener_ecuacion();//funcion de la hija TExplicita
		PR->mostrar();//funcion de la hija TExplicita
		delete PR;//elimina el espacio apuntado por PR
		
		
		PR=new TGeneral;// ahora PR apunta a otra.... hija TGeneral
		PR->asignar_coordenadas(x1,y1,x2,y2);//utiliza funcion de asignar coordenadas de la MADRE Trecta
		PR->obtener_ecuacion();// utiliza la funcion de la clase HIJA TGeneral
		PR->mostrar();// utiliza la funcion de la clase HIJA TGeneral
		delete PR;//elimina el espacio apuntado por PR
		PR=nullptr;
		return 0;
}

