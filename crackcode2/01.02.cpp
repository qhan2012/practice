
#include <iostream>
using namespace std;

void rev (char *st) {
  char *begin = st;
  char *end = st+strlen(st)-1;
  while (begin < end) {
    cout << " begin is " << *begin << ", end is " << *end << ", strlen is " << strlen(st)<< endl;
    *begin ^= *end;
    *end ^= *begin;
    *begin ^= *end;
    begin++;
    end--;
  }
};

int main() {
  char xxx[] = "helloworld";
  cout << xxx << endl;
  rev(xxx);
  cout << xxx << endl;
}
