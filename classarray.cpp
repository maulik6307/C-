#include <iostream>
using namespace std;

class shop
{

private:
    int ItemId[100];
    int ItemPrice[100];
    static int counter; //---> static data mamber

public:
    void setprice();
    void displayprice();
    void initcounter();

    // Static Member Fuction :
    static void getcount(void)
    {
        cout << "the value of your count is : " << counter << endl;
    }
};

// You have to initialize static member out of class

int shop ::counter; // Default value is 0 so,it start with 0
// int shop ::counter == 100 ; // Default value is 100 so,it start with 100

void shop ::initcounter()
{
    // counter = 0;
    counter;
}

void shop ::setprice(void)
{

    cout << "Enter your Id for Item : " << (counter + 1) << endl;
    cin >> ItemId[counter];
    cout << "Enter your Price for Item : " << endl;
    cin >> ItemPrice[counter];

    counter++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Your Item id is : " << ItemId[i] << " & It's Price is : " << ItemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    shop::getcount(); //---> Static member Fuction
    dukaan.setprice();
    shop::getcount();
    dukaan.setprice();
    shop::getcount();
    dukaan.displayprice();
    return 0;
}