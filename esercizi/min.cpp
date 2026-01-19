#include <iostream>
using namespace std;

int min(int array[], int dimensione) {
	if(dimensione <= 0) {
		cout << "Errore: vettore vuoto!" << endl;
		return -1;
	}
	int minimo = array[0];
	for(int i = 1; i < dimensione; i++) {
		if(array[i] < minimo) {
			minimo = array[i];
		}
	}
	
	return minimo;
}

