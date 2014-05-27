
#include <iostream>

class Number
{
    public:
        Number() { value = 1; };

        Number& operator + (const Number& n1) const
        {
            Number result = value + n1.value;
            return result;
        };

        int value;
};

Number* recurse(const Number& v1)
{
    Number* result = new Number();

    Number one;
    if( v1.value >= 2 )
    {
      Number temp;
      temp.value = v1.value - 1;
      Number* partialResult = recurse( temp ); //capture the object to delete
      *result = *partialResult + one;
      delete partialResult;                    //delete the object
    }

    return result;
}

int main()
{   
    Number result;
    result.value = 15;

    Number *answer;
    answer = recurse(result);
    delete answer;
}

