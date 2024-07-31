#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealPart(Complex, Complex);
    int sumComplexPart(Complex, Complex);
};

class Complex
{
private:
    int a, b;

    // Declaring Individual as a Friend Function :
    friend int calculator::sumRealPart(Complex, Complex);
    friend int calculator::sumComplexPart(Complex, Complex);

    // Declaring Whole Class as a Friend :
    // Friend class calculator
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
};

int calculator ::sumRealPart(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumComplexPart(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.setData(5, 6);
    c2.setData(5, 5);

    calculator c3;
    int res = c3.sumRealPart(c1, c2);
    cout << "You Sum of Real Part is : " << res << endl;
    c3.sumComplexPart(c1, c2);
    int resc = c3.sumComplexPart(c1, c2);
    cout << "You Sum of Real Part is : " << resc << endl;
    return 0;
}