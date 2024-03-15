#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void PrintData(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

    friend Complex sumComplex(Complex o1, Complex o2); // ---> Friend Function
    // Friend Function can access Private member of your class
};

// Friend function define outof the class
// Friend function don't need any type of objects for Invoke the function
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setData(4, 5);
    c1.PrintData();

    c2.setData(5, 6);
    c2.PrintData();

    // c1.sumComplex()--->Invalide

    sum = sumComplex(c1, c2);
    sum.PrintData();
    return 0;
}