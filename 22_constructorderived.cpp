#include <iostream>
using namespace std;

class Base1
{
    int base1;

public:
    Base1(int a)
    {
        base1 = a;
        cout << "This is a Constructor of base 1 class " << endl;
    }
    void Print_value1()
    {
        cout << "the value of base1 is : " << base1 << endl;
    }
};

class Base2
{
    int base2;

public:
    Base2(int a)
    {
        base2 = a;
        cout << "This is a Constructor of base 2 class " << endl;
    }
    void Print_value2()
    {
        cout << "the value of base2 is : " << base2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int der1, der2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        der1 = c;
        der2 = d;
        cout << "This is a derived class constructor " << endl;
        Print_value1();
        Print_value2();
        cout << "the value of der1 is : " << der1 << endl;
        cout << "the value of der2 is : " << der2 << endl;
    }
};
int main()
{
    Derived Maulik(1, 2, 3, 4);
    // Maulik.Print_value1();
    // Maulik.Print_value2();
    return 0;
}