
#include<iostream>
using namespace std;

	float a[] = {-88888,4,64,34,3,51,-532,43,1111,-55};
	int n = 10;

void quicksort(float *a, int left, int right) {
	int i(left), j(right);
	float pivot = a[i], tmp;
	while(i <= j) {
		while (a[i] > pivot) i++;
		while (a[j] < pivot) j--;
		if (i <= j) {
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
	}

	if (left < j)
		quicksort(a, left, j);
	if (i < right)
		quicksort(a, i, right);
}

void qsort(float *x, int first, int last){
 	int pivot, j, i;
 	float temp;
 	if (first < last){
  	pivot = first;
	  i = first;
	  j = last;
	  while (i < j){
		  while (x[i] < x[pivot] && i<last) i++;
		  while (x[j] > x[pivot] && j>first) j--;
		  if (i < j){
		    temp = x[i];
		    x[i] = x[j];
		    x[j] = temp;
		  } 	
	  }
	  temp = x[pivot];
	  x[pivot] = x[j];
	  x[j] = temp;
	  qsort(x, first, j - 1);
	  qsort(x, j + 1, last);
 	}
}


int main() {
	qsort(a, 0, n-1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

