#include <iostream>
using namespace std;

class Employee
{
    // If We don't Write Private then it become by default private
    //  Private data is only accessed by class fuctions
private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a1, int b1, int c1); //---> Declaration
    void getdata()
    {
        cout << "the value of a is : " << a << endl;
        cout << "the value of b is : " << b << endl;
        cout << "the value of c is : " << c << endl;
        cout << "the value of d is : " << d << endl;
        cout << "the value of e is : " << e << endl;
    }
    int avg(int x, int y, int z)
    {
        x = a;
        y = b;
        z = c;
        cout << "Your average is : " << ((x + y + z) / 100) << endl;
    }
};

void Employee::setdata(int a1, int b1, int c1) //=>defination
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{

    Employee Maulik; //->Here Maulik is a object of Employee class
    Maulik.setdata(12, 1, 2);
    Maulik.d = 65;
    Maulik.e = 656;
    Maulik.getdata();
    cout << endl;
    // Maulik.avg();
    return 0;
}