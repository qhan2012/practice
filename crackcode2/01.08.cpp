
#include <iostream>
using namespace std;

bool isSubstring (char str[], char substr[]) {

	return 1;
};

int main() {
	char x[] = "waterbottle";
	char y[] = "erbottlewat";

	char st[100];
	int i, j;
	for (i = 0; x[i] != '\0'; i++)
		st[i] = x[i];
	for (i = i, j = 0; x[j] != '\0'; j++, i++) {
		st[i] = x[j];
	}
	st[i] = '\0';
	cout << endl << st << endl << endl;
	isSubstring(st, y);
}
