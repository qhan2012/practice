#include <iostream> 
// #include <stream.h> 
using namespace std;
// ostream & operator <<( ostream &, const void * );
class Test
{
private:
  int x;
  int y;
public:
  Test (int x = 0, int y = 0) { this->x = x; this->y = y; }
  Test setX(int a) { x = a; return *this; }
  Test setY(int b) { y = b; return *this; }
  void print() { cout << "x = " << x << " y = " << y << endl; }
};
 
int main()
{
  Test obj1;
  obj1.setX(10).setY(20);
  Test ttt;
  ttt = obj1.setX(10);
  ttt.setY(20);
  ttt.print();
  obj1.print();

  int *a;
  *a = 10;
  return 0;
}