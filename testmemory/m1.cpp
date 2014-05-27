
#include <iostream>

using namespace std;

void f1 (int &a) {
   a = 10;
}
void f2 (int* &b) {
   *b = 10;
}

int main (int argc, char * argv[]) {
   int x = 5;
   f1(x);
   cout << x << endl;

   cout << "here0\n";
   int y0 =100;
   int *y;
   cout << "here0\n";
   y = &y0;
   cout << "here0\n";
   f1 (*y);
   cout << y0 << endl;

   int *z;
   cout << "here1\n";
   *z = 0;
   f2(z);
   cout <<"zz = " << *z << endl;
}