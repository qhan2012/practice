
#include <iostream>
using namespace std;

typedef struct list {
	int data;
	list * next;
} list;

list * newNode(int data) {
	list * node = (list *) malloc(sizeof(list));
	node->data = data;
	node->next = NULL;
	return node;
}

list * revlist (list * n) {
	if (!n || !n->next) return n;
	list * pre = NULL, * cur = n, * nex = n->next;
	while (nex) {
		cur->next = pre;
		pre = cur;
		cur = nex;
		nex = nex->next;
	};
	cur->next = pre;
	return cur;
}

int main() {
	list * tmp = newNode(0);
	tmp->next = newNode(1);
	tmp->next->next = newNode(2);
	tmp->next->next->next = newNode(3);
	tmp->next->next->next->next = newNode(4);
	list * t = tmp;
	while (t) {
		cout << t->data << ", ";
		t=t->next;
	}
	cout << endl;
	t = revlist(tmp);
	while (t) {
		cout << t->data << ", ";
		t=t->next;
	}
	cout << endl;

}
