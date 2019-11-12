#include <iostream>
#include <cmath>
using namespace std;
class cuadratica{
private:
	double a,b,c,x1,x2;
	double parteReal;
	double parteImag;
	
	
public:
	cuadratica(double a1,double b1,double c1){
		a=a1;
		b=b1;
		c=c1;
	}
	bool obtener_raices(){
		double discriminante=b*b-4*a*c;
		if(discriminante>=0){
			x1=(-b+sqrt(discriminante))/(2*a);
			x2=(-b-sqrt(discriminante))/(2*a);
			return true;
		}else{
			double discriminante=b*b-4*a*c;
			parteReal=-b/(2*a);
			parteImag=sqrt(abs(discriminante))/(2*a);
			return false;
		}
	}

	
	
	double ver_raiz1(){return x1;}
	double ver_raiz2(){return x2;}
	double ver_parte_real(){return parteReal;}
	double ver_parte_imag(){return parteImag;}
	
	
	
};
int main(int argc, char *argv[]) {
	cout<<"Ingrese la ecuacion cuadratica..."<<endl;
	double a,b,c;
	cin>>a>>b>>c;
	cuadratica eq1(a,b,c);
	if(eq1.obtener_raices()==true){
		cout<<"Posee raices reales...."<<endl<<"R1:"<<eq1.ver_raiz1()<<endl<<"R2:"<<eq1.ver_raiz2()<<endl;
	}else{
		cout<<"Posee raices imaginarias...."<<endl;
		cout<<"R1: "<<eq1.ver_parte_real()<<" + "<<eq1.ver_parte_imag()<<"i"<<endl;
		cout<<endl;
		cout<<"R2: "<<eq1.ver_parte_real()<<" - "<<eq1.ver_parte_imag()<<"i"<<endl;
	}
	
	return 0;
}

