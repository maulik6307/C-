#include <iostream>
using namespace std;

class employee
{
private:
    int employeeId;
    int employeeSalary;

public:
    void setdata(void)
    {
        cout << "enter your employee Id : " << endl;
        cin >> employeeId;
    };
    void getdata(void)
    {
        cout << "Employee Id is : " << employeeId << endl;
    }
};

int main()
{

    // employee Maulik,Ram,Krishna,sita;

    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }

    return 0;
}