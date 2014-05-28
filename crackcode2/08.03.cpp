//print out all the combination substring of a string

#include <iostream>
using namespace std;

char aaa[11] = "abcdEEEfgh";
char tmp[11];

char *cat (char *str, char ch) {
	// return str+ch;
	char *tmp = str;
	while (*tmp)
		tmp++;
	*tmp = ch;
	*(++tmp) = '\0';
	return str;
}

char *dellast (char *str) {
	char *tmp = str;
	while (*tmp)
		tmp++;
	*(--tmp) = '\0';
	return str;
}

void subset (char *prefix, char *part) {
	if (!*part) {
		cout << "result is " << prefix << endl;
		return;
	}
	char ch = *part;
	part++;			// move to next char, delete first char
	subset(prefix, part);
	subset(cat(prefix, ch), part);
	prefix = dellast(prefix); part--;
}

int main() {
	subset(tmp, aaa);
}



