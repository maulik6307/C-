#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata()
    {
        cout << "your value of real part is : " << real << endl;
        cout << "your value of imaginary part is : " << imaginary << endl;
    }
};

int main()
{
    Complex c1;
    c1.setdata(54, 66);
    c1.getdata();

    // pointer of object
    Complex *ptr = &c1;
    (*ptr).setdata(5, 6);
    (*ptr).getdata();

    // arrow operator with ponter
    ptr->setdata(2, 3);
    ptr->getdata();
    return 0;
}