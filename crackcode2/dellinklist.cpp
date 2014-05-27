
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

list * dellist (list * n, int a) {
	if (!n) return NULL;
	list *tmp = n->next;
	list *pre = n;
	while (pre->data == a) {
		free(pre);
		if (!tmp->next)
			return NULL;
		pre = tmp;
		n = tmp;
		tmp = tmp->next;
	}
	cout << " tmp data is " << tmp->data << endl;
	while (tmp) {
		if (tmp->data == a) {
			pre->next = tmp->next;
			free(tmp);
			tmp = pre->next;
		} else {
			pre = pre->next;
			tmp = tmp->next;
		}
	}
	return n;
}

list *dellist2 (list *n, int a) {
	list *pre = NULL, *cur = n, *nex;
	while (cur) {
		nex = cur->next;
		if (cur->data == a) {
			if (pre)				//	cur is not head
				pre->next = nex;
			else
				n = nex;
			free(cur);
		} 
		else 
			pre = cur;
		cur = nex;
	}
	return n;
}

void dellist3(list **n, int a) {
	list **cur = n; list *entry;
	while (*cur) {
		entry = *cur;
		if (entry->data == a) {
			cout << " here is a " << entry->data << endl;
			*cur = entry->next;
			free(entry);
		}
		else 
			cur = &entry->next;
	}

}

int main() {
	list * tmp = newNode(0);
	tmp->next = newNode(2);
	tmp->next->next = newNode(0);
	tmp->next->next->next = newNode(0);
	tmp->next->next->next->next = newNode(0);
	list * t = tmp;
	while (t) {
		cout << t->data << ", ";
		t=t->next;
	}
	cout << endl;
	// t = dellist2(tmp,0);
	dellist3(&tmp,0);
	while (t) {
		cout << t->data << ", ";
		t=t->next;
	}
	cout << endl;

}
