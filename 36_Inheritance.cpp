#include <iostream>
using namespace std;

class Employee
{
public:
    int Id;
    int salary;
    Employee(int Inpid)
    {
        Id = Inpid;
        salary = 212121;
    }
    Employee() {};
};

// Derived Class syntax :
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc...
// }
// NOTE :- Default Visiblity mode is private
//      :- public visiblity mode:public member of base class become public member of derived class
//      :- protected visiblity mode:protected member of base class become public member of derived class
//      :- private member are not inherited

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        Id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << Id << endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.Id << endl;
    skillF.getData();
    return 0;
}