#include <iostream>
using namespace std;
int confronta(int v1[], int dim1, int v2[], int dim2) {
	if(dim1 != dim2) {
		return -1;
	}
	for(int i = 0; i < dim1; i++) {
		if(v1[i] != v2[i]) {
			return 1;
		}
	}
	return 0;
}

