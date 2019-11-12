#include <iostream>
#include <string>
#include <tuple>
#include <cmath>
using namespace std;
//FUNCIONES RAICES + DISCRIMINANTE

tuple<float,float>raices(float a, float b,float c){
	float d=b*b-4*a*c;
	float r1=(-b+sqrt(d))/(2*a);
	float r2=(-b-sqrt(d))/(2*a);
	return make_tuple(r1,r2);
}

//MAIN
int main(int argc, char *argv[]) {
  float a,b,c;
  cin>>a>>b>>c;
  F
  float r1, r2;
  tie(r1,r2)=raices(a,b,c);
  cout<<"r1 :"<<r1<<" y "<<"r2 :"<<r2<<endl;


	return 0;
}

