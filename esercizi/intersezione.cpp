#include <iostream>
using namespace std;

// Controlla se un valore è presente in un array
bool cerca(int array[], int dimensione, int valore) {
	for(int i = 0; i < dimensione; i++) {
		if(array[i] == valore)
			return true;
	}
	return false;
}
int intersezione(int array1[], int dim1,
				 int array2[], int dim2,
				 int risultato[]) {
	
	int dimRisultato = 0;
	
	for(int i = 0; i < dim1; i++) {
		if (cerca(array2, dim2, array1[i]) &&
			!cerca(risultato, dimRisultato, array1[i])) {
			risultato[dimRisultato] = array1[i];
			dimRisultato++;
		}
	}
	
	return dimRisultato;
}

