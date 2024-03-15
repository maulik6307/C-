#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout << "Enter your age : ";
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "you are 18.";
        break;
    case 22:
        cout << "you are 22";
        break;
    default:
        cout << "not a valid number";
        break;
    }

    return 0;
}
