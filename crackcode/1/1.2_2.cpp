#include <iostream>

using namespace std;

void rev (char aaa[]) {
   int end = strlen(aaa) - 1, i = 0;
   char tmp;
   if (end > 0) {
      while (end > i) {
         tmp = aaa[i];
         aaa[i] = aaa[end];
         aaa[end] = tmp;
         i++;
         end--;
      }
   }
}

int main () {
   char bbb[] = "aaabbbccc";
   rev(bbb);
   cout << bbb << endl;
   const char *ptr;
   ptr = bbb;
}