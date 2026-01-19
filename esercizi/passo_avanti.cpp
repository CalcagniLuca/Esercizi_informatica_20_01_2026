#include <iostream>
using namespace std;

void passoAvanti(int vet[], int n) {
	for(int i = n; i >= 1; i--){
		vet[i] = vet[i-1];
	}
	vet[0] = 0;
}
