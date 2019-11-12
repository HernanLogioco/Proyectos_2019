#include <iostream>
#include <vector>
using namespace std;
float suma_vector(vector <float> &v){
	float suma=0;
	for(unsigned int i=0;i<v.size();i++){
		suma=suma+v[i];
	}
	return suma;
}

void mostrar_vector(const vector <float> &v){
	for(unsigned int i=0;i<v.size();i++){
		cout<<"Pos:"<<i<<"  "<<v[i]<<endl;
	}
}
int main(int argc, char *argv[]) {

	vector<float> v = { 5, 9, 12 };
		float sum = suma_vector(v);
		//float prom = sum / v.size();
		v.push_back(sum);
		mostrar_vector(v);		
		cout<<"La suma total del vector es===> "<<sum<<endl;
	return 0;
}

