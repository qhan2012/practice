/*
**  STRREV.C - reverse a string in place
**
**  public domain by Bob Stout
*/

#include <string.h>
#include <stdio.h>
#include <iostream>

using namespace std;

#define REHASH(a, b, h) ((((h) - (a)*d) << 1) + (b))

void KR(char *x, int m, char *y, int n) {
   int d, hx, hy, i, j;

   /* Preprocessing */
   /* computes d = 2^(m-1) with
      the left-shift operator */
   for (d = i = 1; i < m; ++i)
      d = (d<<1);
   printf("d = %d\n", d);

   for (hy = hx = i = 0; i < m; ++i) {
      hx = ((hx<<1) + x[i]);
      hy = ((hy<<1) + y[i]);
      printf("hx = %d\n", hx);
   }

   printf("\nhx = %x\n", hx);
   printf("hy = %d\n", hy);

   /* Searching */
   j = 0;
   while (j <= n-m) {
      if (hx == hy && memcmp(x, y + j, m) == 0)
         printf("j = %d\n", j);
      hy = REHASH(y[j], y[j + m], hy);
      ++j;
   }

}

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

// #ifdef TEST


int main(int argc, char *argv[])
{
      // printf ("argc is %d\n", argc);
      // while (--argc)
      // {
      //       printf("\"%s\" backwards is ", *++argv);
      //       printf("\"%s\"\n", strrev(*argv));
      // }

      char aaa[4] = "abc";
      char bbb[12] = "abcdefgabcd";
      // KR(aaa,3,bbb,11);

      int asd[3] = {1,2,3};
      cout << asd[2]<<endl;
      int * pt = &asd[0];
      cout << *(pt+3) << endl;

      char array_place[100] = "don't panic";
      char* ptr_place = "don't panic";
      cout << * (ptr_place+1) << endl;
      cout << ptr_place[1] << endl;
      printf("%p\n", ptr_place); 
}

// #endif /* TEST */


