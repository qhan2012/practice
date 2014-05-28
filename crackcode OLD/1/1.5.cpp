#include <iostream>

using namespace std;

char *replacespace (char str[]) {
   int l = strlen(str), cnt = 0;
   for (int i = 0; i < l; i++) 
      if (str[i] == ' ')
         cnt++;
   char *newstr = new char[l + cnt * 2];
   int offset = 0;
   for (int i = 0; i < l; i++) {
      if (str[i] == ' ') {
         newstr[i+offset] = '%';
         newstr[i+offset+1] = '2';
         newstr[i+offset+2] = '0';
         offset = offset + 2;
      } 
      else {
         newstr[i+offset] = str[i];
      }
   }
   return newstr;
};

int main (int argc, char *argv[]) {
   char str[] = " sdaasdfas dsafas fsdfads ";
   char *newstr = replacespace(str);
   cout << str << endl;
   cout << newstr << endl;

   int fff[] = {231,414,4124,431};
   cout << " size of arr is " << sizeof(fff)/sizeof(fff[0]) << endl;
}