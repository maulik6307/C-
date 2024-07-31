#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class myclass
{
public:
    T1 a;
    T2 b;
    T3 c;
    myclass(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a :" << a << endl;
        cout << "The value of b :" << b << endl;
        cout << "The value of c :" << c << endl;
    }
};
int main()
{
    myclass<> m1(1, 1.3, 'C');
    m1.display();
    myclass<int, float, float> m2(2, 2.2, 2.5);
    m2.display();
    return 0;
}