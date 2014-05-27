#include <iostream> 

using namespace std;

void f() {
  static int i = 0;
  i++;
  cout << i << endl;
}

int main(int argc, char *argv[]) {
  int i = 100;
  f();
  int i = 100;
  f();

}