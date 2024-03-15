#include <iostream>
using namespace std;

// Function Prototyping

int sum(int a, int b); //--->acceptable
// int sum(int a,b); //--->not acceptable
// int sum(int ,int); //--->acceptable
void g()
{
    cout << "thanks for using this formula";
}
int main()
{

    // num1 and num2 are actual parameters
    int num1, num2;
    cout << "Enter the value of num1 : " << endl;
    cin >> num1;
    cout << "Enter the value of num2 : " << endl;
    cin >> num2;
    cout << "the sum is : " << sum(num1, num2) << endl;
    g();
    return 0;
}

// a,b and c are formal parameters which takes value from the actual parameters
int sum(int a, int b)
{
    int c = a + b;
    return c;
}