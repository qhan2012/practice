
#include <iostream>
using namespace std;

typedef struct Node {
	int val;
	Node* next;
} Node;

Node * retstart (Node * ptr) {
	if (!ptr) return NULL;
	Node * p1 = ptr, * p2 = ptr;
	while (p1->next && p2->next->next) {
		p1 = p1->next;
		p2 = p2->next->next;
		if (p1 == p2)
			break;
	}
	if (!p1->next || !p2->next->next)			// ERROR CHECK !!!
		return NULL;
	p2 = ptr;
	while (p1->next && p2->next) {
		p1 = p1->next;
		p2 = p2->next;
		if (p1 == p2)
			break;
	}
	return p1;
};

// #define N 100
// struct stack {
// 	int st[N];
// 	int cnt;  // from 1 
// 	int pop () {
// 		if(cnt != 0) {
// 			cnt--;
// 			return (st[cnt]);  
// 		}
// 		else 
// 			cout << "stack empty";	
// 	};
// 	void push (int a) {
// 		if ( cnt > N ) 
// 			cout << "stack full";
// 		else {
// 			for (int i = 0; i < cnt; i++) {
// 				if (st[i] == a)
// 					return;
// 			}
// 			st[cnt] = a;
// 			cnt ++;
// 		}	
// 	} 
// 	stack() :cnt(0) {};
// } stack;

int main() {
	Node a0 = {9, NULL};
	Node a1 = {8, &a0};
	Node a2 = {5, &a1};
	Node b0 = {9, NULL};
	Node b1 = {8, &b0};
	Node b2 = {4, &b1};
	Node *xxx = NULL;
	cout << "pointer size is " << sizeof(xxx) << endl;
	cout << "int size is " << sizeof(int) << endl;
}
