
#include <iostream>

using namespace std;

int aaa[16] = {1,2,3,4,5,6,7,8,9,-10,11,12,-13,-14,15,-16};
int main() {
	int max = -1, tmpmax = -1, tmpfrom = -1, tmpto = -1, from = -1, to = -1;
	for(int i = 0; i < 16; i++) {
		if (tmpmax > 0) {
			tmpmax += aaa[i];
			// from;
			tmpto = i;
		}
		else {
			tmpmax = aaa[i];
			tmpfrom = i;
			tmpto = i;
		}
		if (tmpmax > max) {
			max = tmpmax;
			from = tmpfrom;
			to = tmpto;
		}
	}
	cout << " max is " << max << ", from " << from << " to " << to <<endl;
	tmpmax = 0, max = 0;
	for (int i = 0; i < 16; i++) {
		tmpmax += aaa[i];
		if (max < tmpmax)
			max = tmpmax;
		else
			if (tmpmax < 0)
				tmpmax = 0;
	}
	cout << " max is " << max << endl;
}



