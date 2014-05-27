#include <iostream>

using namespace std;
 

int main() {
  int a[10] = {0, 1, 2,3,4,5,6,7,8,9};

  for (int i = 0; i < 10; i++) {
    srand(time(NULL));
    int index = int(rand() % 10);
    int temp = a[i];
    a[i] = a[index];
    a[index] = temp;
  }
  for (int i = 0; i < 10; i++)
    cout << a[i] << endl;
}