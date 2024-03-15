#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //****************Literals****************

    float c = 34.5F;

    cout << "The size of 34.4: " << sizeof(34.4) << endl;
    cout << "The size of 34.4F: " << sizeof(34.4F) << endl;
    cout << "The size of 34.4f: " << sizeof(34.4f) << endl;
    cout << "The size of 34.4l: " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L: " << sizeof(34.4L) << endl;
    cout << endl;

    //****************Reference Variables****************

    int x = 55;
    int &y = x;
    cout << x << endl;
    cout << y << endl;
    cout << endl;
    //****************Typecasting****************
    float a = 550.55;
    cout << a << endl;
    cout << (int)a << endl;
    cout << (long double)a << endl;
    cout << endl;
    return 0;
}
