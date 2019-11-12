#include <iostream>
using namespace std;
struct NumImag{
	double parte_real,parte_imag;
};	
NumImag operator+(const NumImag &p,const NumImag &q ){
	NumImag r;
	r.parte_real=p.parte_real+q.parte_real;
	r.parte_imag=p.parte_imag+q.parte_imag;
	return r;
}
ostream &operator<<(ostream &o,NumImag _cout){
	o<<_cout.parte_real<<"+"<<_cout.parte_imag<<"i"<<endl;
	return o;
}




int main(int argc, char *argv[]) {
	NumImag C1,C2,r;
	C1.parte_real=1;
	C1.parte_imag=5;
	C2.parte_imag=2;
	C2.parte_real=3;
	r=C1+C2;
	//cout<<r.parte_real<<"+"<<r.parte_imag<<"i"<<endl;
	
	
    cout<<r<<endl;
	
	
	return 0;
}

