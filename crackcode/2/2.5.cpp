#include <iostream> 

using namespace std;


typedef struct Node {
   int val; 
   Node *next;
} Node;

Node *findstart (Node *in) {
   if(!in) return NULL;
   Node *ptr1 = in, *ptr2=in;
   do {
      if(!ptr1->next) return NULL;
      if(!ptr2->next || !ptr2->next->next) return NULL;
      ptr1 = ptr1->next;
      ptr2 = ptr2->next->next;
   } while(ptr1 != ptr2);
   ptr1 = in;
   do {
      ptr1 = ptr1->next;
      ptr2 = ptr2->next;
   } while(ptr1 != ptr2);
   return ptr1;
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
   n3->val = 3;
   n4->next = n1;
   n4->val = 4;
   cout << " start point is " << findstart(n0)->val << endl;
}