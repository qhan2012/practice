
#include <unordered_map>
#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
   int array[10] = {14,431431,213,41,41,4,141,42,432,2};
   unordered_map<int, bool> map_;
   for(int i = 0; i<10; i++) {
      if ( !map_[array[i] ] ) {
         map_[array[i] ] = 1;
      }
      else
         cout << " list has duplication \n" << array[i] << endl ;
   }


   int checker = 0, val;
   char aaa[10] = "fdafaslbc";
   for (int i = 0; i < 10; i++) {
      val = int(aaa[i]) - 'a';
      if((checker & (1<<val)) > 0) {
         cout << " has redundancy! " << val << ", " << aaa[i] << endl;
      }
      checker |= (1<<val);
   }
}