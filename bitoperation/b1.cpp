
#include <iostream>

using namespace std;

#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))

int main () {
   int flag = 5;
   flag = flag << 2;
   cout << flag << endl;
   cout << CHECK_BIT(flag, 32) << endl;
}