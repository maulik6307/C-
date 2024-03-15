#include <iostream>
using namespace std;

// Destructor never takes an argument nor return values
int count = 0;
class num
{

public:
    num()
    {
        count++;
        cout << "This is the time when we create number : " << count << endl;
    }
    ~num()
    {
        cout << "This is the time when we destroy number : " << count << endl;
        count--;
    }
};

int main()
{

    cout << "This is the main Programm :" << endl;
    cout << "object is created for main :" << endl;
    num n1;
    {
        cout << "this is the starting of block :" << endl;
        cout << "creating object for this block :" << endl;
        num n2, n3;
        cout << "Exiting from this block :" << endl;
    }
    cout << "Back To Main : " << endl;
    return 0;
}