#include <iostream>
using namespace std;

bool is_palindromo(int array[], int dimensione) {
	for(int i = 0; i < dimensione / 2; i++) {
		if(array[i] != array[dimensione - 1 - i]) {
			return false;
		}
	}
	return true;
}
