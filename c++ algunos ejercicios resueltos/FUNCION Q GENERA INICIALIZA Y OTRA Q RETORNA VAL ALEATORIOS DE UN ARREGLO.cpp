#include <iostream>
#include <cstdlib>
using namespace std;
int * crearvector(int n){
	int *p=new int [n];
	for (int i=0;i<n;i++){
		p[i]=1000+rand()%500;
	}
	return p;
}

void Mostrarvector(int *p,int n){
	for(int i=0;i<n;i++){
		cout<<"Pos: "<<"["<<i<<"]"<<"="<<*(p+i)<<endl;
	}
	delete []p;
}
int main(int argc, char *argv[]) {
	int n;
	cout<<"Ingrese cant. de datos:  "<<endl;
	cin>>n;
	int *t=crearvector(n);
	Mostrarvector(t,n);
	return 0;
}

