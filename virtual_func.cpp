#include <iostream>
using namespace std;
class Base
{
public:
    int Base_var = 1;
    virtual void display() //-->This is a virtual fuction
    {

        cout << "The value of Base_var is : " << Base_var << endl;
    }
};

class Derived : public Base
{
public:
    int Derived_var = 2;
    void display()
    {
        cout << "The value of Derived_var is : " << Derived_var << endl;
    }
};
int main()
{
    Base obj_base;
    Derived obj_derived;
    Base *base_pointer = &obj_derived;
    base_pointer->display();
    return 0;
}