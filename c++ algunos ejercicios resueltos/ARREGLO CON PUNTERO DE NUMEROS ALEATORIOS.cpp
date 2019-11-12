#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	int *p=new int [n];//vector dinamico que genera numeros aleatorios...
	for (int i=0;i<n;i++){
		p[i]=1000+rand()%500;
	}
	for (int i=0;i<n;i++){//muestro el vector generado
		cout<<p[i]<<endl;
	}
	delete[] p;//vacio la memoria New 
	return 0;
}

