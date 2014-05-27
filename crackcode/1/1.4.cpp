#include <iostream>

using namespace std;

char tmp[100];

void merge (char str[], int a, int mid, int b) {
   int i = a, j = mid+1, t = 0;
   while (i<=mid && j<=b) {  
      if(str[i]-'a' < str[j]-'a') {
         tmp[t] = str[i]; t++; i++;
      } else {
         tmp[t] = str[j]; t++; j++;
      }
   }
   if (i > mid) {
      while (j<=b) {
         tmp[t] = str[j]; t++; j++;
      }
   } 
   if (j > b) {
      while (i<=mid) {
         tmp[t] = str[i]; t++; i++;
      }
   } 
   for (i = 0; i <= b-a; i++) {
      str[a+i] = tmp[i];
      cout << str[a+i] ;
      // cout << tmp[i] << " " << a << " " << mid << " " << b << endl;
   }
   cout << endl;
};

void mergesort (char str[], int a, int b) {
   if (b - a >= 1) {
      int mid = (b + a)/2 ;
      // cout << " a is " << a << ", b is " << b << " , mid is " << mid << endl;
      mergesort (str, a, mid);
      mergesort (str, mid+1, b);
      merge(str, a, mid, b);
   }
};

bool checkanagram (char a[], char b[]) {
   if (strlen(a) != strlen(b)) return 0;
   cout << " a is " << a << endl << " b is " << b << endl;
   mergesort(a, 0, strlen(a)-1);
   mergesort(b, 0, strlen(b)-1);
   cout << " a is " << a << endl << " b is " << b << endl;
   for (int i = 0; i < strlen(a); i++) {
      if(a[i] != b[i])
         return 0;
   }
   return 1;
}

int main (int argc, char * argv[]) {
   char aaa[10] = "faaffdsaf";
   cout << " length is " << strlen(aaa) << endl;
   char bbb[10] = "faafdsaf";
   if(checkanagram(aaa, bbb))
      cout << " EQUAL! \n";
   else
      cout << " Not EQUAL!\n";
}
