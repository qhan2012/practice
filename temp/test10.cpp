

#include <iostream>

using namespace std;

typedef struct Node{
  int val;
  Node* next;
  Node* prev;
} Node;

Node* deletenode (Node* thisnode, int value) {
  if(!thisnode) return thisnode;  
  Node* tmp = thisnode;
  if (thisnode->val == value) {
    tmp = thisnode->next;
    tmp->prev = NULL;
    delete thisnode;
  }
  while (!thisnode->next) {
    thisnode = thisnode->next;
    if (thisnode->val == value) {
      thisnode->prev->next = thisnode->next;
      thisnode->next->prev = thisnode->prev;
      delete thisnode;
    }
  }
  return tmp;
};

class aaa {
public:
  static int bbb;

  };
int aaa::bbb = 12;

void addd (int * const x) {
  (*x)++;
};
void addd2 (int & x) {
  x++;
};
void func (void) {
  static int x = 0;
  x++;
  cout << " x = " << x << endl;
};

int main (int argc, char* argv[]) {
  cout << "here\n";
  aaa aaa1;
  int x = 1;
  addd(&x);
  addd2(x);
  cout << x << endl;
  func();
  func();
}






