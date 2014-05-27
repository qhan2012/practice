#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  bool f3 = 0, f5 = 0;
  for (int i = 1; i <= 100; i++) {
    f3 = (i%3);
    f5 = (i%5);
    if((f3)&&(f5)) cout << i ;
    if(!f3) cout << "Fizz";
    if(!f5) cout << "Buzz";
    cout << endl;
  }
}
