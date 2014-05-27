#include <iostream>
using namespace std;

struct X {
private:
  int a;
public:
  void Set_a(int x) {

    // The 'this' pointer is used to retrieve 'xobj.a'
    // hidden by the automatic variable 'a'
    // this->a = x;
    (*this).a = x;
  }
   void Print_a() { cout << "a = " << a << endl; }
};

int main() {
  X xobj;
  int a = 5;
  xobj.Set_a(a);
  xobj.Print_a();
}
