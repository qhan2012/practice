
#include <iostream>
using namespace std;

typedef struct Node {
	int data;
	Node * l;
	Node * r;
} Node;

Node * newNode(int data)
{
    Node* node = (Node*) malloc(sizeof( Node));
    node->data = data;
    node->l = NULL;
    node->r = NULL;
 
    return(node);
}

bool checkbalance (Node * tr, int &h) {
	int h_l = 0, h_r = 0;
	if(tr->l) {
		if(!checkbalance(tr->l, h_l) ) 
			return 0;
	}
	if(tr->r) {
		if(!checkbalance(tr->r, h_r) ) 
			return 0;
	} 

	if ( h_l-h_r <= 1 && h_l-h_r >= -1) {
		h = ((h_l>h_r)?h_l:h_r) + 1;
		cout << " 1: At Node " << tr->data << ", its heights is " << h - 1 << ", its left height is " << h_l << ", its right height is " << h_r << endl;
		return 1;
	} else {
		return 0;
	}
};

bool checkbalance2 (Node * tr, int &h) {
	if(!tr) {
		h = -1;
		return 1;
	}
	int h_l = 0, h_r = 0;
	if(!checkbalance(tr->l, h_l) || !checkbalance(tr->r, h_r) ) 
			return 0;

	if ( h_l-h_r <= 1 && h_l-h_r >= -1) {
		h = ((h_l>h_r)?h_l:h_r) + 1;
		cout << " 1: At Node " << tr->data << ", its heights is " << h - 1 << ", its left height is " << h_l << ", its right height is " << h_r << endl;
		return 1;
	} else {
		return 0;
	}
};

int main() {
		Node *root = newNode(1);
    root->l = newNode(2);
    root->r = newNode(3);
    root->l->l = newNode(4);
    root->l->r = newNode(5);
    root->l->l->l = newNode(8);
  int tmp;
  if (checkbalance(root, tmp))
  	cout << "Balance!"<< endl;
  else 
  	cout << "Not Balance!"<< endl;
  if (checkbalance2(root, tmp))
  	cout << "Balance!"<< endl;
  else 
  	cout << "Not Balance!"<< endl;
}
