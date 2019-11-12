#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
	vector<int> v1(45,0);
	if (v1.empty())
		cout << "Está vacío" << endl;
	else
		cout << "Tamaño: " << v1.size() << endl;
	v1.resize(50,1);
	for(unsigned int i=0;i<v1.size();i++){
		cout<<"Pos="<<i<<" "<<v1[i]<<endl;
	}
	//ITERADORES!!! !
	vector<int>::iterator itbeg = v1.begin();//CREAMOS UN ITERADOR "ITBEG" Q SEÑALA AL PRIMER ELEMENTO DEL VECTOR V1
	cout<<itbeg[0]<<endl;//MOSTRAMOS EL VALOR Q APUNTA EL ITERADOR ITBEG
	*itbeg=18;//-------otra forma es esta : itbeg= v1.insert(itbeg,20);//CAMBIA EL VALOR AL Q APUNTA EL ITERADOR ITBEG POR 18..o 20
	cout<<itbeg[0]<<endl;//MOSTRAMOS EL NUEVO VALOR AL Q APUNTA EL ITERADOR
	
	v1.push_back(10);//INSERTAR UN VALOR 10 AL FINAL DEL VECTOR V1	v1.pop_back();//elimina el ultimo elemento del vector v1.	
	
	
	itbeg = v1.erase(itbeg);//elimina el dato al que apunta iterador itbeg
	cout<<itbeg[0]<<endl;
	
	
	vector<int>::iterator itbeg2 = v1.begin()+11;//crea otro iterador llamado itbeg2 
	v1.erase(itbeg,itbeg2);//borra RANGO DE DATOS desde itbeg hasta itbeg2 pero no incluye a itbeg2	
	for(unsigned int i=0;i<v1.size();i++){//Muestra el vector despues de haber borrado 10 posiciones de v1.
		cout<<"Pos= "<<i<<" "<<v1[i]<<endl;
	}
	
	
	
	v1.clear();//borra TODO VECTOR
	for(unsigned int i=0;i<v1.size();i++){//Muestra el vector despues de haber borrado 10 posiciones de v1.
		cout<<"Pos= "<<i<<" "<<v1[i]<<endl;
	}
	
	return 0;
}

