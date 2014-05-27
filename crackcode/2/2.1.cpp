#include <iostream> 
#include <unordered_map>

using namespace std;


typedef struct Node {
   int val; 
   Node *next;
} Node;

void removedup (Node *in) {
   unordered_map<int, bool> mapp;
   Node *prev = in, *tmp;
   cout << "  this is " << in->val << endl;
   while (in) {
      if(mapp.find(in->val) != mapp.end()) {
         cout << " here1 " << in->val << endl;
         tmp = in;
         prev->next = in->next;
         in = in->next;
         delete tmp;
      } else {
         cout << " here2 " << in->val << endl;
         mapp[in->val] = 1;
         prev = in;
         in = in->next;
      }
   }
};

int main() {
   Node *n0 = new Node;
   Node *n1 = new Node;
   Node *n2 = new Node;
   Node *n3 = new Node;
   Node *n4 = new Node;
   n0->next = n1; 
   n0->val = 0;
   n1->next = n2;
   n1->val = 1;
   n2->next = n3;
   n2->val = 2;
   n3->next = n4;
   n3->val = 2;
   n4->next = NULL;
   n4->val = 4;
   Node *n = n0;
   while (n) {
      cout << n->val << endl;
      n = n->next;
   }
   removedup(n0);
   n = n0;
   cout << " fsafdsa" << endl;
   while (n) {
      cout << n->val << endl;
      n = n->next;
   }   
}