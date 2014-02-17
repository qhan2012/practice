
#include<iostream>
using namespace std;

float a[] = {-88888,4,12,34,443,51,-532,43,1111,-55};
int n = 10;

void merge (int begin, int end, int mid, float *l) {
	float *tmp = new float [end - begin + 1];
	int p = begin, q = mid + 1, j = 0;
	while (p <= mid && q <= end) {
		if (l[p] > l[q]) {
			tmp[j] = l[p];
			j++; p++;
		} else {
			tmp[j] = l[q];
			j++; q++;
		}
	}
	if(p > mid) {
		for (; q <= end; q++) {
			tmp[j] = l[q]; 
			j++;
		}
	} 
	if(q > end) {
		for (; p <= mid; p++) {
			tmp[j] = l[p];
			j++;
		}
	}

	for ( int i = begin, j = 0; i <= end; i++, j++ ) {
		l[i] = tmp[j];
	}
}

void msort ( int begin, int end, float *l ) {
	if ( end - begin + 1 >= 2) {
		int mid = (begin + end) / 2;		
		msort (begin, mid, l);			//	first half
		msort (mid+1, end, l);								//	last half
		merge (begin, end, mid, l);						// 	merge two lists
	}
}

int main() {
	msort(0, 9, a);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}


