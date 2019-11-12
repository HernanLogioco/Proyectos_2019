#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {

int v[8] = { 200, 210, 220, 230,240, 250, 260, 270 };
cout<<v+7<<endl;//A la posicion a la que apunta v se le suma 7 y muestra la direccion de memoria del 270(v siempre es la direccion del primer 
				//elemento del arreglo);
int *aux=v+7;//creo un puntero aux q me guarda la direccion del ultimo elemento del arreglo (direccion de la pos 8);
cout<<*aux<<endl;//muestra lo que contiene la pos guardada en aux---->esto es lo mismo q cout<<*(v+7)

cout<<*v<<endl;

cout<<*v+3<<endl;//muestra lo q hay en la posicion del puntero v 
                 //y a ese resultado le suma 3 ||resultado==200+3||


cout<<*(v+3)<<endl;//dezplaza el puntero v 3 lugares y muestra lo q hay en esa nueva posicion de v=="230"
	

/* y si quisieramos saber en que posicion del arreglo apunta un nuevo puntero p??*/
int *p=v+7;//1ero creamos puntero p que apunte a la pos 8 del 
			//arreglo v ya que p solo puede guardar direcciones...
cout<<p-v<<endl;//restando pos final - pos inicial obtengo la posicion del arreglo a la q apunta p
		
return 0;
}

