#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{

    //------> constant <--------{constant value can not be changed}

    const int a = 33;
    cout << a;
    cout << endl;

    //------> Manipulators <------------

    int b = 2223;
    int c = 21;
    int d = 325;

    // Without Manipulator Fuction
    cout << "value without manipulators : " << b << endl;
    cout << "value without manipulators : " << c << endl;
    cout << "value without manipulators : " << d << endl;
    cout << endl;

    // With Manipulator Fuction
    cout << "value manipulators : " << setw(4) << b << endl;
    cout << "value manipulators : " << setw(4) << c << endl;
    cout << "value manipulators : " << setw(4) << d << endl;
    cout << endl;

    //-----------> Operator Precedence <-----------

    int x = 42;
    int y = 54;
    int z = (((a * 5) - b) + 65);
    cout << z;
    return 0;
}
