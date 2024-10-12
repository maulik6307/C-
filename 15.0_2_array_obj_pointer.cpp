#include <iostream>
using namespace std;

class shop
{
    int Id;
    float price;

public:
    void setdata(int a, float b)
    {
        Id = a;
        price = b;
    }
    void getdata()
    {
        cout << "item id is : " << Id << endl;
        cout << "the value of price is : " << price << endl;
    }
};

int main()
{
    shop *ptr = new shop[3];
    shop *ptrtemp = ptr;
    int p;
    float q;
    for (int i = 0; i < 3; i++)
    {
        cout << "your id for item is : " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "item number : " << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}