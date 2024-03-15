#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor name is as same s class name
    // It is automatically Invoked whenever object is created

    Complex(void); //---->Constructor Declaration

    // Complex(int ,int); //---->Parameterized Declaration

    void Printdata(void)
    {
        cout << "the value is : " << a << " + " << b << "i" << endl;
    }
};

// Constructor Function
Complex::Complex(void)//---> Default Constructor
{
    a = 12;
    b = 65;
}

// Complex::Complex(int x,int y)//---> Parameterized Constructor
// {
//     a = x;
//     b = y;
// }


int main()
{
    // after Creating object c Constructor Fuction is ready to execute
    Complex c;
    // Complex c(54,65);---->Parameterized object

    c.Printdata();
    return 0;
}