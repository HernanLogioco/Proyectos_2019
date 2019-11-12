#include <iostream>
using namespace std;
class A {
	int c;
public:
		A(int x=0) {
			c=x;
		}
	void verX(){
		cout<<c<<endl;
	}
};


class B : public A {
public:
	B(int x) : A(x) {
		
	}; 
	
} ;
int main(int argc, char *argv[]) {
	int valor;
	cin>>valor;
	
	B b2(valor);
	b2.verX();
	return 0;
}

