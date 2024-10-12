#include <iostream>
using namespace std;

int main()
{

    // Pointer
    int a = 2;
    int *ptr = &a;
    cout << "the value of a is : " << *(ptr) << endl;

    // new keyword in pointer
    int *p = new int(54);
    // delete p; //-->This will remove value from pointer and make free space
    cout << "the value at p is : " << *(p) << endl;

    int *arr = new int[2];


    // delete [] arr; //-->This will remove value from array and make free space
    arr[0] = 10;
    arr[1] = 20;
    cout << "The value of first element is " << arr[0] << endl;
    cout << "The value of second element is " << arr[1] << endl;

    cout << "the value at arr is : " << arr << endl;
    cout << "the value at arr is : " << *arr << endl;
    return 0;
}