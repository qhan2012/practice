#include <iostream>
using namespace std;

// int arr [10] = {1, 0, 0, 2, 1, 1, 0, 0, 2, 2};
int arr [10] = {2, 2, 2, 2, 1, 1, 0, 0, 0, 0};

void swap(int aaa[], int a, int b) {
	int tmp = aaa[a];
	aaa[a] = aaa[b];
	aaa[b] = tmp;
};

void func(int a[], int size) {
	int last0 = 0, first2 = size-1, last1;
	while (last0 <= size) {
		if (a[last0] != 0)
			break;
		last0++;
	}	
	while (first2 >= 0) {
		if (a[first2] !=2)
			break;
		first2--;
	}
	last1 = last0;
	cout << "last0 = " << last0 << ", last1 = " << last1 << ", first2 = " << first2 << endl;
	while (last1 < first2) {
		while (last1 < first2) {
			if (a[last1] !=1)
				break;
			last1++;
		}		
		if (a[last1] == 0) {
			swap(a, last0, last1);
			while (last0 <= size) {
				if (a[last0] != 0)
					break;
				last0++;
			}	
		}
		if (a[last1] == 2) {
			swap(a, last1, first2);
			while (first2 >= 0) {
				if (a[first2] !=2)
					break;
				first2--;
			}
		}
		last1++;
	}
};

int main(int argc, char *argv[]) {
	func(arr, 10);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";
	cout << endl;
}
