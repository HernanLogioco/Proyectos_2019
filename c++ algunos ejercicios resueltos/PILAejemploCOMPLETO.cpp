#include <iostream>
using namespace std;
struct nodo{
	int valor;
	nodo *sgte;
};

class pila:public nodo{
private:
	nodo *pri;
public:
	pila(){
		pri=nullptr;
	}
	void insertar_nodo(int x){
		nodo *aux=new nodo;
		aux->valor=x;
		aux->sgte=pri;
		pri=aux;
	}
	int mostrar_valor_nodo(){
		return pri->valor;
	}
	void quitar_nodo(){
		nodo *aux;
		aux=pri->sgte;
		delete pri;
		pri=aux;
	}
};
int main(int argc, char *argv[]) {
	pila p;
	p.insertar_nodo(4); //Insertamos un Nodo con valor=4 
	p.insertar_nodo(2);//y otro nodo con valor =2
	cout<<p.mostrar_valor_nodo()<<endl ; //mostramos el ultimo NODO CON EL ULTIMO VALOR AGREGADO
	p.quitar_nodo();//REMOVEMOS EL ULTIMO NODO CREADO... Q SERIA EL NODO=2
	cout<<p.mostrar_valor_nodo()<<endl ;//MOSTRAMOS EL NODO QUE ESTABA ABAJO DEL NODO ANTERIOR
	return 0;
}

