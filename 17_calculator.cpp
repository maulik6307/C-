#include <iostream>
#include <cmath>
using namespace std;

class Simple
{

public:
    int input1;
    int input2;
    int sum;
    int diff;
    int multi;
    int div;
    int set_input(int a, int b)
    {
        input1 = a;
        input2 = b;
    }
    void calcu1(void)
    {
        sum = input1 + input2;
        diff = input1 - input2;
        multi = input1 * input2;
        div = input1 / input2;
    }

    void display(void)
    {
        cout << "Your sum is : " << sum << endl;
        cout << "Your diff is : " << diff << endl;
        cout << "Your multi is : " << multi << endl;
        cout << "Your div is : " << div << endl;
    }
};

class scientific : public Simple
{
protected:
public:
    int input3;
    int input4;
    int sqr1, sqr2, cub1, cub2, sqrt1, sqrt2;
    int set_scientific(int a, int b)
    {
        input3 = a;
        input4 = b;
    }

    void scientific_calcu(void)
    {
        sqr1 = input3 * input3;
        sqr2 = input4 * input4;
        cub1 = input3 * input3 * input3;
        cub2 = input4 * input4 * input4;
        sqrt1 = sqrt(input3);
        sqrt2 = sqrt(input4);
    }
    void show(void)
    {
        cout << "The value of square for number 1 is : " << sqr1 << endl;
        cout << "The value of square for number 2 is : " << sqr2 << endl;
        cout << "The value of cube for number 1 is : " << cub1 << endl;
        cout << "The value of cube for number 2 is : " << cub2 << endl;
        cout << "The value of square root for number 1 is : " << sqrt1 << endl;
        cout << "The value of square root for number 2 is : " << sqrt2 << endl;
    }
};

class hybrid : public scientific
{
public:
    void set_value(int a, int b)
    {
        set_input(a, b);
        set_scientific(a, b);
    }
    void process(void)
    {
        calcu1();
        scientific_calcu();
    }
    void result()
    {
        display();
        show();
    }
};
int main()
{

    int a, b;
    cout << "Enter the first number : " << endl;
    cin >> a;
    cout << "Enter the second number : " << endl;
    cin >> b;

    hybrid h;
    h.set_value(a, b);
    h.process();
    h.result();

    return 0;
}