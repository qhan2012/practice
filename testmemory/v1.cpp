#include <iostream>
#include <vector>

using namespace std;

void f1 (vector<int> &x) {
   x[2] = 100;
   // vector<int>().swap(x);        // release memory !!!
}

void f2 (vector<int> * &y) {
   (*y)[0] = 200;
   vector<int>().swap((*y));  
}


int main (int argc, char * argv[]) {
   vector<int> x;
   x.push_back(1);
   x.push_back(22);
   x.push_back(33);
   f1(x);
   cout << x[2] << endl;

   vector<int> * y = new vector<int>(10);
   (*y)[0] = 10;
   f2(y);
    cout << (*y)[0] << endl;
}