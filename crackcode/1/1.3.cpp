#include <iostream>

using namespace std;

void removeconsecutivedup (char *str) {
   int cnt = 0; str++;
   while (*str) {
      if (*(str) == *(str-1)) {
         cnt++;
      } else {
         *(str-cnt) = *(str);
      }
      str++;
   }
   *(str-cnt) = '\0';
};

void removedup (char str[], int num) {
   num = strlen(str);
   for (int i = 0; i < num; i++) {
      for (int j = i+1; j < num; j++) {
         if (str[i] != '\0' && str[i] == str[j]) {
            str[j] = '\0';
         }
      }
   }
   // for (int i = 0; i < num; i++ ) {
   //    if(str[i] == '\0') 
   //       cout << "-";
   //    cout << str[i];
   // }
   // cout << endl;
   int ptr = 1;
   for (int i = 1; i < num; i++ ) {
      if (str[i] != '\0') {
         if (ptr != i) {
            cout << " hhh = " << str[i] << endl;
            str[ptr] ^= str[i];
            str[i] ^= str[ptr];
            str[ptr] ^= str[i];
         }
         ptr++;
      }
   }
   cout << " here is " << str << endl;
};

int main (int argc, char * argv[]) {
   char aaa[10] = "faaffdsaf";
   removedup (aaa, 9);
   cout << " aaa is " << aaa << endl;
   char bbb[10] = "abccdde";
   removeconsecutivedup (bbb);
   cout << " bbb is " << bbb << endl;
}
