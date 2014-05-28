#include <iostream>

using namespace std;

void reversechars (char * str);
void reversechar2 (char *str) {
   if(!str) return;
   int ind = 0;
   char *end = str;
   while ( (*end) != '\0' ) {
      end++;
   }
   end--;
   while (end > str) {
      *end ^= *str;
      *str ^= *end;
      *end ^= *str;
      end--; str++;
   }
};

int main () 
{  
   cout << "hello\n";
   char aaa[5] = "abcd";
   printf("%c", aaa[0]);

   cout << "hello two\n";
   cout << aaa << endl;
   reversechars(aaa);
   cout << aaa << endl;
   cout << "hello three\n";
   cout << aaa << endl;
   reversechar2(aaa);
   cout << aaa << endl;

}


void reversechars (char * str)
{  
   if (str) {
      char * end = str;
      char tmp;
      while (*end != '\0') {
         end++;
      }
      end --;
      while (str < end) {
         // tmp = *end;
         // *end = *str;
         // *str = tmp;
         *end ^= *str;
         *str ^= *end;
         *end ^= *str;
         str ++;
         end --;
      }

      // cout << char(*end) << endl;
   }

   return ;
}

