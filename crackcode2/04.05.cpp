
#include <iostream>
#include <queue>
using namespace std;

typedef struct Node {
	int data;
	Node * l;
	Node * r;
	Node * n;			// for the same depth
	Node * p;			// parent
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
		cout << " 1: At Node " << tr->data << ", its heights is " << h - 1 << ", its left height is " << h_l << ", its right height is " << h_r << endl;
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
		tmp->l->p = tmp;
		tmp->r = buildbst(a, (x+y)/2+1, y);
		tmp->r->p = tmp;
		return tmp;
	}
};

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

Node * listatdepth (Node * tr, int d) {
	int i = -1;
	Node * start = tr, * thisnode = NULL, * lastnode = NULL;
	Node * thisdepth = NULL;
	queue <Node * > dfs;
	dfs.push(start);
	bool needStart = 1, foundD = 0;
	while (!dfs.empty()) {
		thisnode = dfs.front();
		dfs.pop();
		if (thisnode == start) {
		// cout << " we got node: " << thisnode->data << " i = " << i << ", d = " << d << endl;
			i++; needStart = 1;
			if (i == d) {
				foundD = 1;
				lastnode = thisnode;
				thisdepth = thisnode;
				thisnode->n = NULL;
				cout << " Found the expected depth: " ;
				fflush(stdout);
			}
			if (i > d)
				return thisdepth;
		} 
		if (foundD == 1) {
			lastnode->n = thisnode;
			lastnode = thisnode;
			thisnode->n = NULL;
			cout << thisnode->data << " ";
			fflush(stdout);
		}
		if (thisnode->l) {
			dfs.push(thisnode->l);
			if (needStart) {
				start = thisnode->l;
				// cout << "here is a start: " << thisnode->l->data << endl;
				needStart = 0;
			}
		}
		if (thisnode->r) {
			dfs.push(thisnode->r);
			if (needStart) {
				start = thisnode->r;
				// cout << "here is a start: " << thisnode->r->data << endl;
				needStart = 0;
			}
		}
	}
};

int aaa[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int main() {
	Node * bst = buildbst(aaa, 0, 15);
	int tmp;
	if(checkbalance(bst, tmp))
		cout << "Balanced!\n";
	else 
		cout << "Not Balanced!\n";
	Node * l = listatdepth(bst, 3);
	cout << endl;
}



