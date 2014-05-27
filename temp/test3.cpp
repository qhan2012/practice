#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int **p = new int*[10];
  // int **p = (int**) malloc(10);

  int a[] = {1,2,3};

  printf ("%p\n", (p));
  printf ("%p\n", (p+1));
  printf ("%p\n", (p+3));
  printf ("%p\n", (p+11));
  printf ("%p\n", (p[2]));
  printf ("%p\n", (p[2]+1));
  printf ("%p\n", (p[2]+11));
  printf ("%p\n", (p[0]));
  printf ("%p\n", (p[1]));
  printf ("%p\n", (p[2]));
  printf ("%p\n", (p[3]));
  printf ("%p\n", (p[11]));

  *(p+11) = &a[0]; 
  printf ("%p\n", (&a[0]));
  printf ("%p\n", *(p+3));
  cout << a[2] << endl;
  cout << *(*(p+11)+3) << endl;
}
