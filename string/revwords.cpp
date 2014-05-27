
#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

string func0 (string s) {
  stringstream sstream(s);
  string ss;
  stack<string> stack1;
  while (sstream >> ss) {
    stack1.push(ss);
  };
  ss = "";
  while(!stack1.empty()) {
    cout << stack1.top() << endl;
    ss += stack1.top() + ' ';
    stack1.pop();
  }
  return (ss);
};

void func1 (char aaa[], char rev[]) {
  int end = strlen(aaa) - 1;
  if (end == 0 || end == 1) return ;
  while (end >= 0) {
    if (aaa[end] == ' ') {
      end--;
    } else {
      break;
    }
  }
  cout << "erere = " << end << endl;
  int tmp; int index = 0; bool lastisspace = 0;
  while (end >= -1) {
    if ((aaa[end] == ' ' )  || end == -1) {
      if (lastisspace) {
        end--;
      }
      else {
        tmp = end; end++;
        while (aaa[end] != ' ' && end != strlen(aaa)) {
          rev[index] = aaa[end];
          end++; index++;
          // cout << " end2 = " << end << " and " << strlen(aaa) << endl;
        }
        rev[index] = ' ';
        index++;
        end = tmp;
        lastisspace = 1;
        end --;
      }
    }
    // cout << " end = " << end << endl;
    else {
      lastisspace = 0;
      end--;
    }
  }
  rev[index] = '\0';
  cout << "\nreversed words = \n" << rev << endl;
};

string func2 (string s) {
  stringstream ss(s);
  string tmp;
  stack<string> st;
  while (ss >> tmp) {
    st.push(tmp);
  }
  tmp = "";
  while (!st.empty()) {
    tmp += st.top() + ' ';
    st.pop();
  }
  return tmp;
};

int main()
{   
  string s = "hello world   good morning!  ";
  string ss = func2(s);
  cout << "reversed string is \n" << ss << endl;


  char aaa[] = "hi hello    world good!       ";
  char rev[100];
  func1(aaa, rev);

}

