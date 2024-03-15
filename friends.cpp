#include <iostream>
using namespace std;
class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    void display()
    {
        cout << "the value of class X is : " << data << endl;
    }

    friend void add(X, Y);
    friend void exchange(X &, Y &);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }

    void display()
    {
        cout << "the value of class Y is : " << num << endl;
    }
    friend void add(X, Y);
    friend void exchange(X &, Y &);
};

void add(X o1, Y o2)
{
    cout << "the sum is : " << (o1.data + o2.num);
}

void exchange(X &x, Y &y)
{
    int temp = x.data;
    x.data = y.num;
    y.num = temp;
}
int main()
{
    X a1;
    a1.setValue(5);
    a1.display();
    Y b1;
    b1.setValue(6);
    b1.display();
    add(a1, b1);
    cout << "\nafter Swap the values : " << endl;
    exchange(a1, b1);
    a1.display();
    b1.display();

    return 0;
}