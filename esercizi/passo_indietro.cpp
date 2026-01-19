#include <iostream>
using namespace std;

void passoIndietro(int vet[], int n) {
	for(int i = 0; i < n-1; i++) {
		vet[i] = vet[i+1];
	}
	vet[n-1] = 0;
}
