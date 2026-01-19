#include <iostream>
using namespace std;


int moda(int v[], int n) {
	int moda = v[0];
	int max = 0;
	
	for(int i = 0; i < n; i++) {
		int conta = 0;
		
		for(int j = 0; j < n; j++) {
			if(v[j] == v[i])
				conta++;
		}
		if(conta > max) {
			max = conta;
			moda = v[i];
		}
	}
	return moda;
}
