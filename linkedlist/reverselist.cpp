
#include<iostream>
using namespace std;

typedef struct Node {
	int val;
	Node * next;
} Node;

Node * initialize ();
// Node * reverselist (Node *);
void print (Node *);

Node *recursive (Node *n, Node *nnext) {
	Node *in;
	if(nnext->next) {
		in = recursive(n->next, nnext->next);
	} else {
		in = nnext;
	}
	nnext->next = n;
	n->next = NULL;
	return in;
};

Node *recursive2 (Node *n) {
	Node *in;
	if(n->next->next) {
		in = recursive2(n->next);
	} else {
		in = n->next;
	}
	n->next->next = n;
	n->next = NULL;
	return in;
};

Node* reverselist2 (Node * n) {
	if (!n || !n->next) return n;
	Node *tmpprev, *tmpnext;
	tmpnext = n->next;
	n->next = NULL;
	while(tmpnext) {
		tmpprev = n;
		n = tmpnext;
		tmpnext = n->next;
		n->next = tmpprev;
	}
	return n;
};

Node* reverselist3 (Node * n) {
	if (!n || !n->next) return n;
	Node *tmpprev = NULL, *tmpnext = n->next;
	while(tmpnext) {
		n->next = tmpprev;
		tmpprev = n;
		n = tmpnext;
		tmpnext = n->next;
	}
	n->next = tmpprev;
	return n;
};

int main() {
	Node * list = initialize ();
	// list = reverselist (list);
	print (list);

	list = reverselist2 (list);
	print (list);

	cout << "  recursive is " << endl;
	list = recursive (list, list->next);
	print (list);

	cout << "  recursive2 is " << endl;
	list = recursive2 (list);
	print (list);
}

Node * initialize () {
	Node * tmp = new Node[10];
	for ( int i = 0 ; i < 10; i++) {
		tmp[i].val = i;
		if (i+1 < 10)
			tmp[i].next = &tmp[i+1];
	}
	// cout << "tmp " << tmp ->val << endl;
	return tmp;
}

// Node * reverselist(Node * cur) {
// 	if (cur == NULL) 
// 		return cur;
// 	else if (cur->next == NULL) 
// 		return cur;
// 	else if (cur->next->next == NULL) {
// 		cur->next->next = cur;
// 		cur->next = NULL;
// 		return cur->next;
// 	} else {
// 		Node * pre, * nex;
// 		pre = cur; 
// 		cur = cur -> next;
// 		nex = cur -> next;
// 		pre->next = NULL;
// 		cur->next = pre;
// 		while (nex->next != NULL) {
// 			pre = cur;
// 			cur = nex;
// 			nex = nex->next;
// 			cur->next = pre;
// 		}
// 		nex->next = cur;
// 		return nex;
// 	}
// }

void print (Node * cur) {
	while (cur) {
		cout << cur->val << endl;
		cur = cur->next;
	}
}

