#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Fuction Objects (Functors): Fuctions wrraped in a class so that it available like an object

    int arr[] = {12, 2, 55, 4, 6, 5};
    // sort(arr, arr + 6); //-->sort array in incresing order
    sort(arr, arr + 6, greater<int>()); //-->Sort array in decresing order
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}