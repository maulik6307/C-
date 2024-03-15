#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int age;
    cout << "Please,Enter you age : ";
    cin >> age;

    if (age < 18)
    {
        cout << "You can not drive." << endl;
    }
    else if (age == 18)
    {
        cout << "You can drive." << endl;
    }
    else
    {
        cout << "You can also drive." << endl;
    }
    return 0;
}
