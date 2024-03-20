#include <iostream>
using namespace std;

class BankDeposit
{
    int amount;
    int years;
    float interestrate;
    float returnvalue;

public:
    BankDeposit();
    BankDeposit(int a, int y, float r);
    BankDeposit(int a, int y, int r);
    void show(void);
};

BankDeposit::BankDeposit()
{
}
BankDeposit::BankDeposit(int a, int y, float r)
{
    amount = a;
    years = y;
    interestrate = r;
    returnvalue = amount;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

BankDeposit::BankDeposit(int a, int y, int r)
{
    amount = a;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = amount;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void BankDeposit::show()
{
    cout << "Your amout is : " << amount << " and your time period is : " << years << " so,your return amount with interest is : " << returnvalue << endl;
}
int main()
{
    int a, y;
    float r;
    int R;
    BankDeposit bd1, bd2;
    cout << "add your amount : ";
    cin >> a;
    cout << "Time Period in year : ";
    cin >> y;
    cout << "Put Interestrate in % : ";
    cin >> r;

    bd1 = BankDeposit(a, y, r);
    bd1.show();
    cout << endl;
    cout << "add your amount : ";
    cin >> a;
    cout << "Time Period in year : ";
    cin >> y;
    cout << "Put Interestrate in number : ";
    cin >> R;
    bd2 = BankDeposit(a, y, R);
    bd2.show();

    return 0;
}