
#include <iostream>
using namespace std;

void swap (char st[], int i, int j) {
  st[i] ^= st[j];
  st[j] ^= st[i];
  st[i] ^= st[j];
};

void rmdup (char st[]) {
  int len = strlen(st);
  for (int i = 0; i < len-1; i++) {
    for (int j = i+1; j < len; j++) {
      if (st[i] != '\0' && st[i] == st[j]) {
        st[j] = '\0';
      }
    }
  }
  for (int i = 0; i < len; i++)
    cout << st[i] << ", ";
  cout << endl;
  int j = 0;
  for (int i = 0; i < len; i++) {
    if (st[i] == '\0') {
      j = i;
      while (j < len) {
        if (st[j] != '\0')
          break;
        j++;
      }
      if (j >= len)
        break;
      swap(st, i, j);
    }
  }
};

int main() {
  char xxx[] = "helloworldd";
  cout << xxx << endl;
  rmdup(xxx);
  cout << xxx << endl;
}
