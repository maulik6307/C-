#include <iostream>
using namespace std;

// This function not work
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// This is call by reference using pointer
void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// This is call by reference using reference variable
void swapreferencevar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{

    int x = 54;
    int y = 65;

    cout << "the value of x is : " << x << " & the value of y is : " << y << endl;
    swappointer(&x, &y);
    cout << "the value of x is : " << x << " & the value of y is : " << y << endl;

    cout << endl;
    int z;
    int w;

cout<<"Enter the value of z : ";
cin>>z;
cout<<"Enter the value of w : ";
cin>>w;

    cout << "the value of z is : " << z << " & the value of w is : " << w << endl;
    swapreferencevar(z, w);
    cout << "the value of z is : " << z << " & the value of w is : " << w << endl;
    return 0;
}