#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // A &setdata(int a)
    void setdata(int a)
    {
        // this keyword is behave like pointer
        this->a = a;
        // return *this;
    }
    void getdata()
    {
        cout << "the value of a is : " << a << endl;
    }
};
int main()
{
    A a;
    a.setdata(5);
    a.getdata();
    return 0;
}