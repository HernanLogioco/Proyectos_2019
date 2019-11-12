#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int arrays[5]={5,2,3,4,5};
	int contador=0;
		for (int i=0; i<5;i++){
		cout<<"Elemento del vector ["<<i<<"]:"<<*(arrays+contador)<<endl;
		contador=contador+1;
		}
	return 0;
		
		/*int main(int argc, char *argv[]) {
		int arrays[5]={1,2,3,4,5};
		int contador=0;
		for (int i=0; i<5;i++){	
		cout<<"Elemento del vector ["<<i<<"]:"<<*arrays++<<endl;     CONTADOR ++
	}
		return 0;
	}
		*/
}



