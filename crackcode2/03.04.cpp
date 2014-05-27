
#include <iostream>
using namespace std;

void move(int f, int t) {
	cout << " move disk from rod " << f << " to " << t << endl;
}

void hanoi (int disk, int from, int through, int to) {
	if (disk == 1) {
		move(from, to);
	}
	else if (disk > 1) {
		hanoi(disk-1, from, to, through);
		move(from, to);
		hanoi(disk-1, through, from, to);
	}
};

int main() {
	hanoi(100, 0, 1, 2);
}
