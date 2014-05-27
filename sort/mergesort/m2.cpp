#include <iostream>


using namespace std;

void merge(int l[], int begin, int mid, int end) {
	int tmp[end-begin+1];
	int tmp1=begin, tmp2 = mid+1, i=begin;
	while (tmp1 <= mid && tmp2 <= end) {
		if(l[tmp1]>l[tmp2]) {
			tmp[i] = l[tmp1]; tmp1++; i++;
		}
		else {
			tmp[i] = l[tmp2]; tmp2++; i++;
		}
	}
	if(tmp1 > mid) {
		while (tmp2 <= end) {
			tmp[i] = l[tmp2]; tmp2++; i++;
		}
	}
	if(tmp2 > end) {
		while (tmp1 <= mid) {
			tmp[i] = l[tmp1]; tmp1++; i++;
		}
	}
	for (i=begin; i<=end; i++) {
		l[i] = tmp[i];
	}
};

void msort (int l[], int begin, int end) {
	if (end - begin + 1 <= 1) return ;
	if (end - begin + 1 >= 2) {
		msort(l, begin, (begin+end)/2);
		msort(l, (begin+end)/2+1, end);
	}
	merge(l, begin, (begin+end)/2, end);
};

int main () {
	int s = 5;
	int l[5] = {55, 64, 432, 453, 3 };
	msort (l, 0, 4);
	for (int i=0; i<5; i++)
		cout << " " << l[i] << ", ";
	cout << endl;
};


