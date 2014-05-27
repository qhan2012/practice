
#include <iostream>
#include <math.h>
using namespace std;

#define Size pow(3,2)

int** init (int s) {			// initialize matrix and read in data

};

int findrow (int** m, int s) {		// find a row with a blank cell

};

bool check (int** m, int s) {			// check whether the matrix is consistant or not

};

bool solver (int** m, int s) {
		// call findrow if no such row, DONE -- return GOOD
		// if there is a row, try fill it up in DFS -- 		two level loop, outside is the cells in the row, inside is the vaule tried on this cell
																									// try a value, if check() == 1, try next empty cell; if == 0, try next value

};

int main () {
	
	cout << Size << endl;
}

