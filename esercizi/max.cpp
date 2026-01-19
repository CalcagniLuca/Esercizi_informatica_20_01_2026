#include <iostream>
using namespace std;

// Restituisce il valore massimo in un vettore
int max(int array[], int dimensione) {
	if(dimensione <= 0) {
		cout << "Errore: vettore vuoto!" << endl;
		return -1;
	}
	int massimo = array[0];
	for(int i = 1; i < dimensione; i++) {
		if(array[i] > massimo) {
			massimo = array[i];
		}
	}
	return massimo;
}

