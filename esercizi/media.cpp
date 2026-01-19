#include <iostream>
using namespace std;

int media(int v[], int dim){
	int somma = 0;
	for(int i = 0; i < dim; i++){
		somma += v[i];
	}
	return somma/dim;
}
