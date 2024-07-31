#include <iostream>
using namespace std;
template <class T1, class T2>
float average(T1 a, T2 b)
{
    float av = (a + b) / 2;
    return av;
}

int main()
{
    float a;
    a = average(5, 5.5);
    cout << a << endl;
    return 0;
}