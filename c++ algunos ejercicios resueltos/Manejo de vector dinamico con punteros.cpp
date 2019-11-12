#include <iostream>
#include <cstdlib>
using namespace std;
class vector_dinamico{
private:
	int *p;
	int tam;
public:
vector_dinamico(int _tam){//constructor
	tam=_tam;
	p=new int [tam];
	for(int i=0;i<tam;i++){
		*(p+i)=1000+rand()%500;
	}
}


~vector_dinamico(){delete []p;}//destructor

void duplicar(){
	tam=tam*2;
	int *aux=new int[tam];//creo un vector aux... con el doble del tamanio del primer vector_dinamico.
	for(int i=0;i<tam/2;i++){//copiar lo q hay en el primer vector al segundo pero solo hasta la mitad del tamanio... 
	aux[i]=p[i];
	}
	
	for(int i=tam/2;i<(tam);i++){//y a la otra mitad la relleno con nuevos val aleatorios
		aux[i]=rand()%100+1;
	}
	delete[]p;
	p=aux;
}
int ver_valor(int x){return *(p+x);}//o tmb se podria poner p[x]....dada una posicion muestra q valor hay en esa pos.
int ver_tam(){return tam;}//muestra el tam del vector dinamico

void mostrar_vector(){
for(int i=0;i<tam;i++){
	cout<<"pos"<<i<<":"<<p[i]<<endl;
}
}


};

int main(int argc, char *argv[]) {
	int tam;
	cin>>tam;
	vector_dinamico v(tam);
	cout<<"el tam elegido para el vector es "<<endl;
	cout<<v.ver_tam()<<endl;
	v.mostrar_vector();
	cout<<"vector duplicado...ahora su tam es:"<<endl;
	v.duplicar();
	cout<<v.ver_tam()<<endl;
	
	cout<<"el nuevo vector duplicado//"<<endl;
	v.mostrar_vector();	
	

	cout<<"Deseo ver el numero q esta en la posicion..."<<endl;
	int t;
	cin>>t;
	cout<<v.ver_valor(t)<<endl;
	v.~vector_dinamico();
	return 0;
}

