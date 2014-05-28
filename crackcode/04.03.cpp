
#include <iostream>
using namespace std;

typedef struct Node {
	int data;
	Node * l;
	Node * r;
} Node;

bool checkbalance2 (Node * tr, int &h) {
	if(!tr) {
		h = -1;
		return 1;
	}
	int h_l = 0, h_r = 0;
	if(!checkbalance2(tr->l, h_l) || !checkbalance2(tr->r, h_r) ) 
			return 0;

	if ( h_l-h_r <= 1 && h_l-h_r >= -1) {
		h = ((h_l>h_r)?h_l:h_r) + 1;
		cout << " 1: At Node " << tr->data << ", its heights is " << h << ", its left height is " << h_l << ", its right height is " << h_r << endl;
		return 1;
	} else {
		return 0;
	}
};

Node * buildbst (int a[], int x, int y) {
	if(x > y)
		return NULL;
	else if(x == y) {
		Node * tmp = new Node;
		tmp->data = a[x];
		tmp->r = NULL;
		tmp->l = NULL;
		return tmp;
	}
	else {		//if(x < y)
		Node * tmp = new Node;
		tmp->data = a[(x+y)/2];
		cout << " at node " << tmp->data << ", x = " << x << ", y = " << y << endl;
		tmp->l = buildbst(a, x, (x+y)/2-1);
		tmp->r = buildbst(a, (x+y)/2+1, y);
		return tmp;
	}
};


int aaa[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int main() {
	Node * bst = buildbst(aaa, 0, 15);
	int tmp;
	if(checkbalance2(bst, tmp))
		cout << "Balanced!\n";
	else 
		cout << "Not Balanced!\n";
}



