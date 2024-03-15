#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(5+j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(a+j),a(i)--->This will through Error because value of a is initialized first.
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
    }
};

int main()
{
    Test t1(5, 6);
    return 0;
}