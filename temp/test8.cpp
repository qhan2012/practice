#include <iostream> 
using namespace std;

class animal 
{ 
private:
     int aaa;
public: 
     animal(); 
     ~animal(); 
     void fun1(animal *maybedog_maybehorse); 
     virtual void born(); 
}; 

void animal::fun1(animal *maybedog_maybehorse) 
{ 
     maybedog_maybehorse->born(); 
};

animal::animal() { } ;
animal::~animal() { } ;
void animal::born() 
{ 
     cout<< "animal"; 
} 
///////////////////////horse
class horse:public animal 
{ 
private:
     int aaa;
public: 
     horse():aaa(0){}; 
     ~horse(); 
     virtual void born(); 
}; 

// horse::horse() { } 
horse::~horse() { } 
void horse::born()
{ 
     cout<<"horse"; 
} 


class CExample {
private:
    int a;
    float b;
public:
    //构造函数初始化列表
    CExample(): a(0),b(8.8)
    {};
};
class inherit: public CExample {
public:
     inherit(): a(1), b(9.9) {};
};
///////////////////////main
int main() 
{ 
     animal a; 
     horse b; 
     a.fun1(&b); 
} 

