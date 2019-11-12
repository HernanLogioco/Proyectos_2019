#include <iostream>
using namespace std;
int *busca(int elemento,int *t,int tam){
	for(int i=0;i<tam;i++){
		if(elemento==t[i]){
			return t+i;
		}
	}	
	return nullptr;
}
int main(int argc, char *argv[]) {

	int v[8] = { 200, 210, 220, 230,240, 250, 260, 270 };
	for(int i=0;i<8;i++){
		cout<<v[i]<<endl;
	}
	int elemento;
	cout<<"elemento a buscar??"<<endl;
	cin>>elemento;
	int *aux;
	aux=busca(elemento,v,8);
	if(aux==nullptr){
		cout<<"no se encontro elemento.."<<endl;
		
	}else{
		cout<<"el elemento buscado esta en la pos ...:"<<(aux-v)<<endl;
		
	}
	return 0;
}

