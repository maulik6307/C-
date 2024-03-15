#include <iostream>
using namespace std;

class Trader
{
protected:
    string title;
    float rating;

public:
    Trader(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
    // virtual void display() =0;  --->Pure virtual Function
};

class Fundamental : public Trader
{
    int fundamental_trade;

public:
    Fundamental(string s, float r, int n) : Trader(s, r)
    {
        fundamental_trade = n;
    }
    void display()
    {

        cout << "This is a title of : " << title << endl;
        cout << "Rating : " << rating << " out of 10 " << endl;
        cout << "Totle Number of trade : " << fundamental_trade << " out of 1000 trade " << endl;
    }
};
class Technical : public Trader
{
    int Technical_trade;

public:
    Technical(string s, float r, int n) : Trader(s, r)
    {
        Technical_trade = n;
    }
    void display()
    {

        cout << "This is a title of : " << title << endl;
        cout << "Rating : " << rating << " out of 10 " << endl;
        cout << "Totle Number of trade : " << Technical_trade << " out of 1000 trade " << endl;
    }
};
int main()
{
    string s = new char[30];
    float r;
    int n;

    // Fundamental
    s = "Fundamental";
    r = 5.8;
    n = 322;
    Fundamental Fundamental_trade(s, r, n);

    // Technical
    s = "Technical";
    r = 7.5;
    n = 745;
    Technical Technical_trade(s, r, n);

    Trader *ptr[2];
    ptr[0] = &Fundamental_trade;
    ptr[1] = &Technical_trade;

    ptr[0]->display();
    ptr[1]->display();
    return 0;
}