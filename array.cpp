#include <iostream>
using namespace std;

int main()
{

    // array example

    int marks[4] = {32, 23, 54, 65};
    int *p = marks;
    for (int i = 0; i < 4; i++)
    {
        cout << "the value  is " << marks[i] << endl;
    }

    cout << endl;
    // Pointers and array
    cout << "the value of marks[0] is : " << *p << endl;
    cout << "the value of marks[1] is : " << *(p + 1) << endl;
    cout << "the value of marks[2] is : " << *(p + 2) << endl;
    cout << "the value of marks[3] is : " << *(p + 3) << endl;

    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "the value is : " << *(p + i) << endl;
    }

    return 0;
}