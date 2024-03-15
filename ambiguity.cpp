#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {

        cout << "Hello world" << endl;
    }
};
class base2
{
public:
    void greet()
    {

        cout << "Hello people" << endl;
    }
};

class derived : public base1, public base2
{
public:
    void greet()
    {
        base2::greet(); //-->this will ambiguity resolution with use of base2 class greet function.
                        //-->If this class have it's own greet function then it is first choice for run.
    }
};
int main()
{
    derived d;
    d.greet();

    return 0;
}