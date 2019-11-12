#include <iostream>
using namespace std;
class complejo{
private:
	float partereal;
	float parteimag;
public:
	friend istream& operator >>(istream &o,complejo &p);
	
	complejo(float,float);
	float verreal();
	float verimag();
	//FUNCION IMPLEMENTADA DESDE ADENTRO DE LA CLASE SOLO UTILIZA UN OBJETO Y PUNTERO THIS PARA ACCEDER A ATRIBUTOS
	//-------------------------------
	complejo operator +(complejo &c3){
		complejo suma(this->partereal+c3.partereal,this->parteimag+c3.parteimag);
		return suma;;
	}
	complejo& operator=(complejo c) {
		this->partereal = c.partereal;
		this->parteimag = c.parteimag;
		return *this;//retorna un puntero al objeto q se hacee la asignacion
	}
	
	
	
	
	
};
complejo::complejo(float x, float y){
	partereal=x;
	parteimag=y;
}
float complejo::verreal(){
	return partereal;
}
float complejo::verimag(){
	return parteimag;
}

//funcion q no pertenece a la clase complejo (funcion que es global)
//descomentar

/*complejo operator +(complejo c1, complejo c2){
	complejo c3(c1.verreal()+c2.verreal(),c1.verimag()+c2.verimag());//crear 1 complejo c3 y le paso como parametro al constructor 2 flotantes...
	return c3;
}*/
 ostream& operator << (ostream &o,complejo p)
{
	o<< p.verreal()<< "+" << p.verimag();
	return o;
}		
 
istream& operator >>(istream &o,complejo &p){
	 o>>p.partereal;
	 o>>p.parteimag;
	 return o;
 }
 

int main(int argc, char *argv[]) {
complejo c1(4,1);
complejo b(0,0);
cin>>b;//sobrecarga de IOSTREAM LEER Y ASIGNAR DATOS SIENDO AMIGA DE LA CLASE
	complejo c2(2,7);
	complejo c3(0,0);
	c3=(c1+c2);
	cout<<"complejo creado :"<<c3.verreal()<<" + "<<c3.verimag()<<"i "<<endl;
	
		cout<<endl;
		cout<<"sobrecarga de asignacion = "<<endl;
		
		complejo c4(0,0);//creo un objeto c4 cargado con ceros... al cual le asignare los datos del objeto C2
		c4=c2;//paso los valores de c2 a c4 con metodo operator = 
	cout<<c4.verreal()<<" + "<<c4.verimag()<<" i "<<endl;//muestro c4...
	cout<<c4;//utilizando sobrecarga de ostream
	return 0;
}

