#include <iostream>
using namespace std;
class number
{

    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }

    // If There is no Copy Constructor then Compiler Provide its own Copy Constructor
    number(number &obj)
    {
        cout << "This is Copy Constructor" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "your value is : " << a << endl;
    }
};

int main()
{
    number n1, n2(65), n3, n6;
    n1.display();
    n2.display();
    n3.display();

    // Copy Constructor Invoke
    number n4(n2);
    n4.display();

    number n5 = n2; // copy constructor
    n5.display();

    n6 = n2; // This is not a copy constructor because this is only assignment
    return 0;
}