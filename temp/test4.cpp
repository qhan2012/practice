#include <iostream>
#include <stdio.h>
using namespace std;

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
 
#define NUM_THREADS     5

void *task_code(void *argument)
{
   int tid;
 
   tid = *((int *) argument);
   printf("Hello World! It's me, thread %d!\n", tid);
 
   /* optionally: insert more useful stuff here */
   if (tid == 4) {
      for (int xxxx=0; xxxx < 100; xxxx++) {
        cout << "I am in tid 4 and xxxx = " << dec << xxxx << " !!!!!!"<< endl;
      }
   } 
 
   // return NULL;
   pthread_exit(NULL);
}

int main() {
  typedef char* charp;
  // const charp  ppp;
  const int a = 1;
  const int *b = &a;
  int c = 0;
  int * const d = & c;

  float x = 5.5, y = 1.3;
  cout << float(int(x*10)%int(10*y))/10 << endl;

  char *p;
  p=(char*)malloc(100);
  char *q = (char*)malloc(100);

  int afdas = 0x80000000;
  char aaa = 0x0a;
  char bbb = 00000001;
  cout << "aaa = " << aaa * bbb << endl;
  cout << "char size = " << sizeof(char) << endl;
  cout << "int size = " << sizeof(int) << endl;
  cout << "float size = " << sizeof(float) << endl;
  cout << "double size = " << sizeof(double) << endl;
  cout << "long double size = " << sizeof(long double) << endl;

  int n = 0x400, m = 0x15, ii = 2, j = 6;

  n = n | (m << 2); 
  cout << endl << "n = " << hex << n << endl;

  float xxx= 1.1;
  cout << "xxx = " << hex << xxx << endl;

  union test {
    int test1;
    char test2;
  };
  union test aaaaa;
  aaaaa.test2 = 'a';
  aaaaa.test1 = 1;
  cout << "aaaaa = " << aaaaa.test1 << endl;

  int afda = 1 << 2;
  cout << " afda = " << afda << endl << endl;


     pthread_t threads[NUM_THREADS];
   int thread_args[NUM_THREADS];
   int rc, i;
 
   // create all threads one by one
   for (i=0; i<NUM_THREADS; ++i) {
      thread_args[i] = i;
      printf("In main: creating thread %d\n", i);
      rc = pthread_create(&threads[i], NULL, task_code, (void *) &thread_args[i]);
      assert(0 == rc);
   }
 
   // wait for each thread to complete
   for (i=0; i<NUM_THREADS; ++i) {
      // block until thread i completes
      rc = pthread_join(threads[i], NULL);
      printf("In main: thread %d is complete\n", i);
      assert(0 == rc);
   }
 
   printf("In main: All threads completed successfully\n");
   exit(EXIT_SUCCESS);

}





