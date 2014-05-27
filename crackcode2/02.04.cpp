
#include <iostream>
using namespace std;

typedef struct Node {
	int val;
	Node* next;
} Node;

int sum0 (Node* x, Node* y, Node* z) {
	int c_i = 0, c_o = 0, s = 0;
	z->next = NULL;
	if (x->next && y->next) {
		Node *zz = new Node();
		z->next = zz;
		c_i = sum0(x->next, y->next, zz);
	} 
	s = c_i + x->val + y->val;
	c_o = s/10;
	z->val = s%10;
	return c_o;
}

Node * sum (Node* x, Node* y) {
	Node *c = new Node();
	Node *cc = new Node();
	c->next = cc;
	c->val = sum0(x, y, cc);
	return c;
}

int main() {
	Node a0 = {9, NULL};
	Node a1 = {8, &a0};
	Node a2 = {5, &a1};
	Node b0 = {9, NULL};
	Node b1 = {8, &b0};
	Node b2 = {4, &b1};
	Node *s = sum(&a2, &b2);
	Node *a = s;
	int i = 0;
	while(a != NULL) {
		cout << a->val <<" "; 
		a = a->next;
		// i++;
		// if (i > 3)
		// 	break;
	}
	cout << endl;
	Node *xxx = new Node;
	Node **zzz = new Node*[10];
	for (int i = 0; i < 10; i++)
		*(zzz+i) = new Node[5];
}
