#include <iostream>
#include <cstdlib>
using namespace std;
int *buscar_dato(int *p, int &dato_buscado,int &n){
	 
	for(int i=0;i<n;i++){
		if(p[i]==dato_buscado){
			return p+i;//al puntero p...q apunta a la primer pos del vector le sumo la posicion i donde se encuentra el dato...
		}
	}
	return nullptr;//si el dato no se encuentra entonces la funcion devuelve un puntero nulo...
 }
int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	int *p=new int [n];//Creo un vector dinamico de n tamanio
	
	
	for(int i=0;i<n;i++){
		p[i]=rand()%10;//cargo el vector con num aleatorios
	}
	for(int i=0;i<n;i++){
		cout<<"Pos-"<<i<<":  "<<p[i]<<endl;//muestro el vector...
	}
	cout<<"Ingrese el valor a buscar de rango 0-10"<<endl;
	int dato_buscado;
	cin>>dato_buscado;
	int *aux=buscar_dato(p,dato_buscado,n);//creamos un puntero aux q guardara el puntero de la funcion buscar_dato()...
	
	if(aux==nullptr){
		cout<<"No se encontro el dato buscado"<<endl;
	}else{
		cout<<"El dato encontrado esta en la pos : "<<aux-p<<endl;
	}
	delete [] p;
	return 0;
	}
	

