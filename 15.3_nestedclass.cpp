#include <iostream>
#include <string>

using namespace std;

class binary
{
    // By default all of these are private
    string s;
    void check(void);
    void ones(void);
    void display(void);

public:
    void read(void);
};

void binary::read(void)
{

    cout << "enter a binary number : " << endl;
    cin >> s;
    ones(); //---> this function will give you your answer
}

void binary::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' & s.at(i) != '1')
        {
            /* code */
            cout << "Incorrect binary number" << endl;
            exit(0);
        }
    }
}

void binary::ones(void)
{
    check(); //---> this function will check you number

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else

        {
            s.at(i) = '0';
        }
    }

    display(); //---> This function print number
}

void binary::display(void)
{
    cout << "Your one's complement : " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{

    binary b;
    b.read();
    // b.check();
    // b.ones();
    // b.display();
    return 0;
}