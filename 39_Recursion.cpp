#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
int main()
{
    int a;
    cout << "Enter a number for factorial : " << endl;
    cin >> a;
    cout << "Value of your factorial is : " << factorial(a);
    cout << endl;

    int b;
    cout << "enter the number for fib : " << endl;
    cin >> b;
    cout << "value of term is : " << fib(b);

    return 0;
}