#include <iostream>
using namespace std;

int main()
{

    // Pointers
    int a = 5;
    int *b = &a;
    int **c = &b; //----> Pointer To Pointer

    cout << "The value of a : " << &a << endl;
    cout << "The value of a : " << a << endl;
    cout << "The value of b : " << b << endl;
    cout << "The value of b : " << *b << endl;

    // Pointer to pointer
    cout << "The value of b : " << c << endl;
    cout << "The value of b : " << *c << endl;
    cout << "The value of b : " << **c << endl;

    return 0;
}