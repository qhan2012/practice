#include <iostream>
using namespace std;
int main() {
	int y = 2;
	for (int i = 0; i < 10; i++) {
			 static int k = 10;
			y *= k;
	}
	cout << k << endl;
}
