#include <iostream>

using namespace std;
 
//---------------------------------------------------------------------------
class TRectangle
{
public:
    TRectangle(double l, double w) : length(l), width(w) {}
    virtual void print() const{
        std::cout << "Length = " << this->length << "; Width = " << this->width;};
     void hello () { cout << " hello from base class " << endl; };
    virtual void hello2 () { cout << " hello from base class ver 2 " << endl; };
 
private:
    double length;
    double width;
};

 
//---------------------------------------------------------------------------
class TBox : public TRectangle
{
public:
    TBox() : TRectangle(1, 1), height(1) {}
    TBox(double l, double w, double h) : TRectangle(l, w), height(h) {}
    // virtual is optional here, but it is a good practice to remind it to the developer.
    virtual void print() const;
     void hello (int i) { cout << " hello from derived class " << i << endl; };
    virtual void hello2 (int i) { cout << " hello from derived class " << i << endl; };
private:
    double height;
};
 
//---------------------------------------------------------------------------
// print() method of derived class.
void TBox::print() const
{
   // Invoke parent print() method.
   TRectangle::print();
   std::cout << "; Height= " << this->height;
}


class Base
{
protected:
 
public:
    virtual const char* GetName() { return "Base"; }
};
 
class Derived: public Base
{
public:
    virtual const char* GetName() { return "Derived"; }
};


void* memcpy(void* dest, const void* src, size_t count) {
        char* dst8 = (char*)dest;
        char* src8 = (char*)src;

        while (count--) {
            *dst8++ = *src8++;
        }
        return dest;
    }


int main(int argc, char** argv)
{
   TRectangle rectangle(5.0, 3.0);
 
   // Outputs: Length = 5.0; Width = 3.0
   // rectangle.print();
   // cout << endl;
   rectangle.hello();
 
   TBox box(6.0, 5.0, 4.0);
 
   // The pointer to the most overridden method in the vtable in on TBox::print,
   // but this call does not illustrate overriding.
   // box.print();
   cout << endl;
   box.hello(2);
 
   // This call illustrate overriding.
   // // outputs: Length = 6.0; Width = 5.0; Height= 4.0
   // static_cast<TRectangle&>(box).print();
   // cout << endl;

   // TRectangle *aaa = &box;
   // aaa->hello2(5); 

   //  Derived cDerived;
   //  Base *rBase = &cDerived;
   //  cout << "rBase is a " << rBase->GetName() << endl;

   char s[] = "hello";
   const char *p = s;
   char *p1 = (char*)p;
    int ppp = 10;
    int  *q = &ppp;
    cout << *q << endl;
    int *xxx = q;
    int **x;
    int *bbb = *x;
    bbb = *x;
}


