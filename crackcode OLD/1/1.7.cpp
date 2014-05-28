#include <iostream>

using namespace std;

int arr[10][10] = {  {1,2,3,4,5,6,7,8,9,10}, 
                     {1,2,3,4,5,6,7,8,9,10},
                     {1,2,3,0,5,6,7,8,9,10},
                     {1,2,3,4,5,6,7,8,9,10},
                     {1,2,3,4,5,6,7,8,9,10},
                     {1,2,3,4,5,6,7,8,9,10},
                     {1,2,3,4,5,6,7,8,9,10},
                     {1,2,3,4,5,6,7,0,9,10},
                     {1,2,3,4,5,6,7,8,9,10},
                     {1,2,3,4,5,6,7,8,9,10} };

void removezero (int (*arr)[10], int n, int m) {
   bool *x = new bool[10];
   memset(x, 0, 10);
   bool *y = new bool[10];
   memset(y, 0, 10);
   for (int i = 0; i < 10; i++ ) {
      for (int j = 0; j < 10; j++) {
         if (arr[i][j] == 0) {
            x[i] = 1;
            y[j] = 1;
         }
      }
   }
   for (int i = 0; i < 10; i++)
      if (x[i] == 1)
         for (int j = 0; j < 10; j++)
            arr[i][j] = 0;
   for (int i = 0; i < 10; i++)
      if (y[i] == 1)
         for (int j = 0; j < 10; j++)
            arr[j][i] = 0;
   delete [] x;
   delete [] y;
};

int main () {
   for (int i = 0; i < 10; i++ ) {
      for (int j = 0; j < 10; j++)
         cout << arr[i][j] << " " ;
      cout << endl;
   }
   removezero(arr, 10, 10);
   for (int i = 0; i < 10; i++ ) {
      for (int j = 0; j < 10; j++)
         cout << arr[i][j] << " " ;
      cout << endl;
   }

   int ** bbb;
   bbb = new int*[10];
   cout << " dsaf\n" ;
   for (int i = 0; i < 10; i++) {
      bbb[i] = new int[11];
      for (int j = 1; j <= 11; j++) {
         cout << j << " ";
         bbb[i][j-1] = j;
      }
   }
   cout << endl << "  here is \n" ;
   for (int i = 0; i < 10; i++ ) {
      for (int j = 0; j < 11; j++)
         cout << bbb[i][j] << " " ;
      cout << endl;
   }

}










