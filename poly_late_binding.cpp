#include <iostream>
using namespace std;

class Base
{
public:
    int Base_var;
    void display()
    {

        cout << "The value of Base_var is : " << Base_var << endl;
    }
};

class Derived : public Base
{
public:
    int Derived_var;
    void display()
    {
        cout << "The value of Derived_var is : " << Derived_var << endl;
    }
};
int main()
{
    Base obj_base;
    Derived obj_derived;

    // base class pointer points to the derived class object
    Base *base_pointer = &obj_derived;

    base_pointer->Base_var = 54;
    // base_pointer->Derived_var = 54; --->This is not a valid
    base_pointer->display();

    // Derived *derived_pointer = &obj_base; ---> this is not a valid

    return 0;
}