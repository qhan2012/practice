

// new
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Node *clone(Node *graph) {
//     if (!graph) return NULL;

//     Map map;
//     queue<Node *> q;
//     q.push(graph);

//     Node *graphCopy = new Node();
//     map[graph] = graphCopy;

//     while (!q.empty()) {
//         Node *node = q.front();
//         q.pop();
//         int n = node->neighbors.size();
//         for (int i = 0; i < n; i++) {
//             Node *neighbor = node->neighbors[i];
//             // no copy exists
//             if (map.find(neighbor) == map.end()) {
//                 Node *p = new Node();
//                 map[node]->neighbors.push_back(p);
//                 map[neighbor] = p;
//                 q.push(neighbor);
//             } else {     // a copy already exists
//                 map[node]->neighbors.push_back(map[neighbor]);
//             }
//         }
//     }

//     return graphCopy;
// }



typedef struct Node {
	vector <Node *>;
} Node;

typedef unordered_map<Node *, Node *> Map;

typedef unordered_map<Node *, Node *> Map;

Node * clonegraph (Node * oldgraph) {
	// use unordered_map to pair original node and new node, new node is index
	// create queue to push oldgraph 
	Node *newgraph = new Node();
	// use queue to do bfs
}



int main() {
	
}

