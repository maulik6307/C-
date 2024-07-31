#include <iostream>
using namespace std;

typedef struct Employee
{
    /* data */
    int Id;
    char favchar;
    float income;
} ep;

union money
{
    /* data */
    int amount;
    float balance;
    char carmodel;
};

int main()
{

    ep Maulik;
    Maulik.Id = 1;
    Maulik.favchar = 'M';
    Maulik.income = 12000000;
    cout << "the value is " << Maulik.Id << endl;
    cout << "the value is " << Maulik.favchar << endl;
    cout << "the value is " << Maulik.income << endl;
    cout << endl;

    union money m1;
    m1.amount = 2121;
    // m1.balance = 6454;
    // m1.carmodel = 'C';
    cout << "the value is " << m1.amount << endl;
    // cout << "the value is " << m1.balance << endl;
    // cout << "the value is " << m1.carmodel << endl;
    cout << endl;

    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal m2 = lunch;
    Meal m3 = breakfast;
    Meal m4 = dinner;
    cout << m2 << endl;
    cout << m3 << endl;
    cout << m4 << endl;
    return 0;
}