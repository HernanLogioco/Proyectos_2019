
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int columnas=2, filas=3;
	double **matrix= new double*[filas];
	for (int i=0; i<filas; i++) 
		matrix[i]= new double[columnas];
	int t, sum=0;
	
	//recorro por FILA LA MATRIZ----- por ejemplo: fila 0 columna 1,2,3,4,5,6,7,8,9...
	for(int x=0; x<filas; x++){
		for(int y=0; y<columnas; y++){
		//	*(*(matrix+x)+y)= rand()%10;//Asigno valores a la matriz
			matrix[x][y]= rand()%10;
			cout<<setw(4)<<*(*(matrix+x)+y);//Muestro por pantalla
		}
		cout<<endl;
	}
	
	
	cout<<"Ingrese fila: ";
	cin>>t;//Fila
	
	while(t<0 || t>2){//VALIDACION DE DATOS... SOLO SE PUEDEN INGRESAR VAL ENTRE 0 Y 2 XQ HAY SOLO 3 FILAS(0.1.2)
		cout<<"error ingresar val entre 0 y 2 inclusive"<<endl;
		cin>>t;
	}
	
	//SUMA LA FILA ELGIDA
	for(int i=0; i<columnas; i++){
		sum += *(*(matrix+t)+i);
	}
	cout<<"Promedio "<<(double)sum/(double)columnas<<endl;
	
	//SUMA CADA COLUMNA Y CALCULA SU PROMEDIO....... AL FINALIZAR DE SUMAR UNA COLUMNA PONE SUM=0 PARA SUMAR LA COLUMNA Q SIGUE...
	cout<<"Promedio de cada columna"<<endl;
	
	
	for(int c=0; c<columnas; c++){//Recorro por columna
		sum=0;	
		for(int f=0; f< filas; f++){
			sum += *(*(matrix+f)+c);}//Sumo por columna
		cout<<(double)sum/(double)columnas<<endl;//MUESTRO PROMEDIO DE LA COLUMNA SUMADA;
	}
	
	
	for (int i=0; i<filas; i++) 
		delete []matrix[filas];//Libero memoria DE FILAS
	delete []matrix;//Libero memoria DE COLUMNAS

	return 0;
} 
