#include <iostream>
using namespace std;

int conta(int v[], int dim, int x){
	int contatore = 0;
	for(int i = 0; i < dim; i++){
		if(x == v[i]){
			contatore++;
		}
	}
	if(contatore == 0){
		return -1;
	}else{
		return contatore;
	}
}
