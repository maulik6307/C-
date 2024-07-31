#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // OPERETORS in C++

    //---> Arithmetic operators

    int a = 4, b = 5;

    cout << "a+b : " << a + b << endl;
    cout << "a-b : " << a - b << endl;
    cout << "a*b : " << a * b << endl;
    cout << "a/b : " << a / b << endl;
    cout << "a%b : " << a % b << endl;
    cout << "a++ : " << a++ << endl;
    cout << "a-- : " << a-- << endl;
    cout << "++a : " << ++a << endl;
    cout << "--a : " << --a << endl;
    cout << endl;

    //---> Comparison operator

    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b : " << (a > b) << endl;
    cout << "a < b : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;
    cout << endl;

    //---> Logical operators

    cout << "(a == b) && (a>b) : " << ((a == b) && (a > b)) << endl;
    cout << "(a != b) || (a>b) : " << ((a != b) || (a > b)) << endl;
    cout << "!(a != b): " << !(a != b) << endl;

    return 0;
}
