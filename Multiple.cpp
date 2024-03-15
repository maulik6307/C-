#include <iostream>
using namespace std;

class base1
{
protected:
    int baseint1;

public:
    void set_baseint1(int a)
    {
        baseint1 = a;
    }
};

class base2
{
protected:
    int baseint2;

public:
    void set_baseint2(int b)
    {
        baseint2 = b;
    }
};

class derived : public base1, public base2
{

public:
    void get_data(void)
    {
        cout << "the value of integer is for base1 : " << baseint1 << endl;
        cout << "the value of integer is for base2 : " << baseint2 << endl;
        cout << "the sum of integer is  : " << baseint1 + baseint2 << endl;
    }
};
int main()
{

    derived der;
    der.set_baseint1(5);
    der.set_baseint2(6);
    der.get_data();
    return 0;
}