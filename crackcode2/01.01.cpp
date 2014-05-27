
#include <iostream>
#include <unordered_map>
using namespace std;

bool allunique (const char str[]) {
  cout << " string is " << str << endl;
  unordered_map <char, bool> mapp;
  for (int i = 0; i < strlen(str); i++) {
    if (mapp.find(str[i]) == mapp.end() )   // not exist
      mapp[str[i]] = 1;
    else
      return 0;
  }
  return 1;
};

bool allunique2 (const char str[]) {
  if (strlen(str) - 1 > strlen(str))
    cout << " here is overflow \n" ;
  cout << "sdfsadfas1111 = " << (strlen(str)-1) << endl;
  cout << "sdfsadfas2222 = " << sizeof(strlen(str)) << endl;
  cout << "size of int = " << sizeof( int) << endl;
  cout << "size of long long = " << sizeof(long long int) << endl;
  cout << "sdfsadfas2222char = " << sizeof(char) << endl;
  for(int i = 0; i+1 < strlen(str); i++ ) {
    for (int j = i+1; j < strlen(str); j++) {
      if (str[i] == str[j])
        return 0;
    }
  }
  return 1;
};

int main() {
  char sss[] = "";
  if(allunique(sss))
    cout << "the string has all unique char" << endl;
  cout << " ending... \n";
  if(allunique2(sss))
    cout << "the string has all unique char 2" << endl;
  cout << " ending 2... \n";
  cout << "INT_MAX is " << INT_MAX << endl;
  cout << "INT_MAX + 1 is " << INT_MAX + 1<< endl;
  cout << "INT_MAX + 5 is " << INT_MAX + 5<< endl;
  cout << "INT_MIN is " << INT_MIN << endl;
  // cout << "size of int is " << INT_MIN << endl;
  unsigned iii = 10 -11;
  cout <<   iii << endl;
};
