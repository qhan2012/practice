
#include <iostream>
using namespace std;

#define N 5

int arr[N][N] = {
									{1, 2, 3, 4, 5},
									{1, 2, 3, 4, 5},
									{1, 2, 3, 4, 5},
									{1, 2, 3, 4, 5},
									{1, 2, 3, 4, 5} };

// clockwise rotation
void rotate(int a[N][N]) {
	int tmp;
	for (int i = 0; i < N/2; i++ )
		for (int j = 0; j <= N/2; j++ ) {			// this area is the rectangle at left upper part
			tmp = a[j][i];
			a[j][i] = a[N-i-1][j];			// lower element
			a[N-i-1][j] = a[N-j-1][N-i-1];		// right element
			a[N-j-1][N-i-1] = a[i][N-j-1];		// top element
			a[i][N-j-1] = tmp;
			// cout << j << ", " << i << endl;
			// cout << N-i-1 << ", " << j << endl;
			// cout << N-j-1 << ", " << N-i-1 << endl;
			// cout << i << ", " << N-j-1 << endl;
			// exit(0);
		} 
};

int main() {
	for(int i = 0; i<N; i++){
		for (int j = 0; j<N; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	rotate(arr);
	for(int i = 0; i<N; i++){
		for (int j = 0; j<N; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}
